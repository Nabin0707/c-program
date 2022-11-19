/*this is going to be fun
generate random number and guessing */
#include<stdio.h>

#include<stdlib.h>//to use rand to generate random number
#include<time.h>//used to use srandtime 


int main()
{
    int number,guess,num=1;
    srand(time(0));//time 0 runs in 0 sec to generate different value every time
    number = rand()%100+1;//to get random number from 1 to 100
    //printf("The random number is   : %d ", number);//
    //keep running the loop until the no is guessed
    do
    {
        printf("Guess the number between 1 and 100   :   \n");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("Lower number please\n");
        }
        else if (guess<number)
        {
            printf("Greater number please\n");
        }
        else{
        printf("You guessed it right in %d attempts\n",num);
        }
        
        num++;


    } while (guess!=number );
    
    return 0;
}