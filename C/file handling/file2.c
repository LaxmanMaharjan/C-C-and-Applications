#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *ptr;
    int a,b;
    char c[20];
    ptr=fopen("file.txt","r");
    if(ptr==NULL)
    {
        printf("Error");
        exit(1);
    }
    while(!feof(ptr))
    {
        fscanf(ptr,"%d %s",&a,c);
        printf("%d %s\n",a,c);

    }
    fclose(ptr);
}
