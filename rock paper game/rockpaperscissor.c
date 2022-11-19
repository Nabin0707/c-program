//my second game//
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int rockpaperscissor(char you,char comp)
{
    //return 1 if you win
    //return -1 if you loose
    //return 0 for draw
    if (you == comp)
    {
        return 0;
    }
    if (you == 'r' && comp == 'p')
    {
        return -1;
    }
     if (you == 'r' && comp == 's')
    {
        return 1;
    } 
    
     if (you == 'p' && comp == 'r')
    {
        return 1;
    } 
    
     if (you == 'p' && comp == 's')
    {
        return -1;
    }    
    if (you == 's' && comp == 'r')
    {
        return -1;
    } 
    if (you == 's' && comp == 'p')
    {
        return 1;
    } 

}


int main()
{
    char you, comp;
   int number;
   srand(time(0));
   number= rand()%100+1; 
   if (number>=77)
   {
    comp='s';
   }
   else if (number<=33)
   {
    comp='p';
   }
   else
   {
    comp='r';
   }
   
   
   

   
   printf("Enter r for rock ,p for paper and s for scissor\n ");
   scanf("%c",&you);
   if (you == 'r' || you == 'p' || you == 's')
   {
    int result = rockpaperscissor(you,comp);
     if (result == 0)
     {
        printf("\nGame draw");

     } 
     else if (result == 1)
     {
        printf("\nYou Won.");
     }
     else
     {
        printf("\nComputer Won.");
     }
     printf("\nYOU CHOOSE %c And COMPUTER CHOOSE %c",you,comp);
     
   
   }
   else{
    printf("\nPlease play carefully and choose right option");
   }
   printf("\nnumber = %d",number);
  return(0);
}
