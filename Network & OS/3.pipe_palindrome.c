/* Create 3 processes P1,P2 and P3, and 2 pipes.
 P1 reads a string and gives it to P2.
 P2 finds whether the given string is palindrome or not and send the result to P3.
 P3 displays the result.
*/

#include <stdio.h>      /* printf */
#include <sys/types.h>  /* pid_t */
#include <stdbool.h>    /* bool,true,false */
#include <unistd.h>     /* fork,_exit,pipe */
#include <stdlib.h>     /* EXIT_SUCCESS */
#include <sys/wait.h>   /* wait */
#include <string.h>     /* strlen */

int main()
{
	pid_t P1,P2,P3;
    bool result=true;
    int stringfd[2],resultfd[2],length,i,j;
    char string[30];

    pipe(stringfd);     //Create a pipe for string

	P1=fork();
    if(P1==0)
    {
        printf("\nEnter a string : ");
        scanf("%s",string);

        /*Send string through write side of pipe*/
        write(stringfd[1],string,(strlen(string)+1));
        _exit(EXIT_SUCCESS);
    }

    wait(NULL); //Make the parent process wait till P1 is terminated
    pipe(resultfd); //Create a pipe for result
	P2=fork();
    if(P2==0)
    {
        /*Read string from read side of pipe*/
        read(stringfd[0],string,sizeof(string));

        length=strlen(string)/sizeof(char);
        for(i=0,j=length-1;i<length;i++,j--)
            if(string[i]!=string[j])
                {
                    result=false;
                    break;
                }

        /*Send result through write side of pipe*/
        write(resultfd[1],&result,sizeof(bool));
        _exit(EXIT_SUCCESS);
    }

    wait(NULL); //Make the parent process wait till P2 is terminated
	P3=fork();
    if(P3==0)
    {
        /*Read result from read side of pipe*/
        read(resultfd[0],&result,sizeof(bool));

        if(result==true)
            printf("Palindrome\n");
        else
            printf("Not Palindrome\n");
        _exit(EXIT_SUCCESS);
    }

    wait(NULL);     //Make the parent wait till all child processes have terminated
	return 0;
}
