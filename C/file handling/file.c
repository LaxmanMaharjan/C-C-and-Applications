#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


void main()
{
    FILE *fp;
    int a,b;
    char name[20];
    fp=fopen("file.txt","w");
    if(fp==NULL)
    {
        printf("Error opening file!");
        exit(1);
    }
    for(b=1;b<3;b++)
    {
        printf("Enter a number.");
        scanf("%d",&a);
        printf("Enter a string.");
        scanf("%s",name);
        fprintf(fp,"Number = %d \t Name= %s\n",a,name);
    }
    fclose(fp);
}
