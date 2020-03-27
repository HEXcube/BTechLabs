/* Create proceses P1,P2,P3 and 2 pipes.
 P1 reads a set of numbers and send them to P2.
 P2 finds whether they're divisible by 2 and send the result to P3.
 P3 finds whether they're divisible by 5 and display the result
*/

#include <stdio.h>      /* printf */
#include <stdbool.h>    /* bool,true,false */

typedef struct
{
    int value;
    bool divisible;
} number;

int main()
{
    int limit=0,i;
    number Number[30];

    for(i=0;i<30;i++)
    {
        Number[i].value=0;
        Number[i].divisible=false;
    }

    printf("\nHow many numbers do you wish to input? : ");
    scanf("%d",&limit);
    printf("Enter the numbers-\n");
    for (i = 0; i < limit; i++)
        scanf("%d",&Number[i].value);
    for(i=0;i<limit;i++)
                printf("%d",Number[i].value);
       
    for(i=0;i<limit;i++)
        if(Number[i].value%2==0)
            Number[i].divisible=true;

    printf("\nThe numbers divisibile by 5 and 2 are :\n");
    for(i=0;i<limit;i++)
        if((Number[i].value%5==0)&&(Number[i].divisible==true))
            printf("%d\t",Number[i].value);

	return 0;
}
