#include<stdio.h>
#include<conio.h>
void reverse(long int s);
void main ()
{
    long int s;
    printf("Enter any number\n");
    scanf("%ld",&s);
    reverse(s);
    getch();
}
void reverse(long int s){
      long int temp,sum=0;
       while(s!=0){
        temp=s%10;
        sum=sum+temp;
        s=s/10;}
        printf("sum is %ld\n",sum);
         if(sum>9)
       {
           reverse(sum);
       }
       else
        printf("So one digit sum=%ld\n",sum);
    }



