#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main(){
         char name[80];
          int i=0,j;
          printf("Enter string:");
          while((name[i]=getchar())!='\n')
          i++;
          j=i;
          i=0;
          while(i<j){
            putchar(toupper(name[i]));
            i++;
          }
          int x=10,y=1;
          x=++x+x++;
          y=y++ + ++y;
          printf("%d\t%d",x,y);


          getch();

}
