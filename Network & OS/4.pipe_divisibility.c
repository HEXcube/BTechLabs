/* Create proceses P1,P2,P3 and 2 pipes.
 P1 reads a set of numbers and send them to P2.
 P2 finds whether they're divisible by 2 and send the result to P3.
 P3 finds whether they're divisible by 5 and display the result
*/

#include <stdio.h>      /* printf */
#include <sys/types.h>  /* pid_t */
#include <stdbool.h>    /* bool,true,false */
#include <unistd.h>     /* fork,_exit,pipe */
#include <stdlib.h>     /* EXIT_SUCCESS */
#include <sys/wait.h>   /* wait */

typedef struct
{
    int value;
    bool divisible;
} number;

int main()
{
	pid_t P1,P2,P3;
    int numfd[2],limfd[2],resultfd[2],limitfd[2],limit=0,i;
    number Number[30];

    for(i=0;i<30;i++)
    {
        Number[i].value=0;
        Number[i].divisible=false;
    }

    pipe(numfd);    //Create a pipe for Numbers
    pipe(limfd);    //Create a pipe for limit

	P1=fork();
    if(P1==0)
    {
        printf("\nHow many numbers do you wish to input? : ");
        scanf("%d",&limit);
        printf("Enter the numbers-\n");
        for (i = 0; i < limit; i++)
            scanf("%d",&(Number[i].value));

        /*Send limit through write side of limit pipe*/
        write(limfd[1],&limit,sizeof(int));
        /*Send Numbers through write side of Numbers pipe*/
        write(numfd[1],Number,sizeof(number)*limit);
        _exit(EXIT_SUCCESS);
    }

    wait(NULL); //Make the parent process wait till P1 is terminated
	pipe(resultfd); //Create a pipe for Result
    pipe(limitfd);  //Create a pipe for limit
    P2=fork();
    if(P2==0)
    {
        /*Read limit from read side of limit pipe*/
        read(limfd[0],&limit,sizeof(int));
        /*Read Numbers from read side of Numbers pipe*/
        read(numfd[0],Number,sizeof(number)*limit);

        for(i=0;i<limit;i++)
            if(Number[i].value%2==0)
                Number[i].divisible=true;

        /*Send limit through write side of limit pipe*/
        write(limitfd[1],&limit,sizeof(int));
        /*Send result through write side of Result pipe*/
        write(resultfd[1],Number,sizeof(number)*limit);
        _exit(EXIT_SUCCESS);
    }

    wait(NULL); //Make the parent process wait till P2 is terminated
	P3=fork();
    if(P3==0)
    {
        /*Read limit from read side of limit pipe*/
        read(limitfd[0],&limit,sizeof(int));
        /*Read result from read side of Result pipe*/
        read(resultfd[0],Number,sizeof(number)*limit);

        printf("\nThe numbers divisible by 5 and 2 are :\n");
        for(i=0;i<limit;i++)
            if((Number[i].value%5==0)&&(Number[i].divisible==true))
                printf("%d\t",Number[i].value);

        _exit(EXIT_SUCCESS);
    }

    wait(NULL);     //Make the parent wait till all child processes have terminated
	return 0;
}
