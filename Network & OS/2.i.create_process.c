/* Create processes as shown in figure and print their IDs and parent IDs

            P1
            |
            C1
            |
            C2
            |
            C3
*/

#include <stdio.h>   /* printf */
#include <sys/types.h> /* pid_t */
#include <unistd.h>  /* fork */
#include <sys/wait.h> /* wait */

int main()
{
	pid_t c1,c2,c3;

    printf("\np1 ID=%d\n\n",getpid());

	c1=fork();
	if(c1==0)
	{
		printf("c1 ID=%d\n",getpid());
        printf("c1 Parent ID=%d\n\n",getppid());

		c2=fork();
		if(c2==0)
		{
			printf("c2 ID=%d\n",getpid());
			printf("c2 Parent ID=%d\n\n",getppid());

            c3=fork();
            if(c3==0)
            {
                printf("c3 ID=%d\n",getpid());
			    printf("c3 Parent ID=%d\n\n",getppid());
            }
        }
    }

    wait(NULL);     //Make the parent wait till all child processes have terminated
	return 0;
}
