#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#define EOL '\n'
void main(){
    char a[80];
    int s,d;
    printf("Enter any string");
    s=0;
    while(a[s]!= '\n'){
    scanf("%c",a[s]);
    s++;
    }
    s=0;
   while(a[s]!='\0'){
   printf("%c",a[s]);
   s++;
   }
   printf("\n%d",s);


    }
