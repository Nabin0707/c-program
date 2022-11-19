#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int calculation(int num1,char operator,int num2)
{
    float ans;
    switch (operator)
    {
       case '+'  : ans = num1+num2;
            return ans;
              break;
       case '-'  : ans = num1-num2;
            return ans;
              break;
       case '/'  : ans = num1/num2;
            return ans;
               break;
       case '*'  : ans = num1*num2;
             return ans;
               break;
       case '^'  : ans = pow(num1,num2);
             return ans;
                break;
       case '%'  : ans = (num1/num2)*100;
              return ans;
               break;
       case 'r'  : ans = num1%num2;
             return ans;
               break;
       /*case '+'  : ans = num1+num2;
              return ans;
                break;  */
       case '@'  : ans = sqrt(num2);
             return ans;
                 break;   
    default:  return 'a';
    }

}

int main()
{
	
 float num1,num2;
 char operator;
 float ans;
  

    printf("\nWelcome to the simple calculator.");

    printf("\n1\t2\t3\t/\t\t@ for squareroot");
    printf("\n4\t5\t6\t+\t\t^ for power");
    printf("\n7\t8\t9\t-\t\t& for Percentage");
    printf("\n.\t0\t*\t=\t\tr for remainder");
    printf("\nSimply use keyboard as the keypad of calculator.");
    printf("\nWrite the operation you want to do .\n");
    printf(":\t");
       scanf("%f%c%f",&num1,&operator,&num2);
    ans =calculation(num1,operator,num2);
    if (ans=='a')
    {
        printf("\nFail in calculation");
    }
    else
    {
        printf("\n%.2f  %c  %.2f  =  %.2f  ",num1,operator,num2,ans);
    }
    

  printf("\nThanks for using my calculator");
   getch();
    return 0; 
    
}
