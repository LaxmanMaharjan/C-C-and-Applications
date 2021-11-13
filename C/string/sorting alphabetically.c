#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int i,j,check;
    char names[5][50];
    char temp[50];
    printf("Enter the names:");
    for(i=0;i<5;i++)
        gets(names[i]);

        for(i=0;i<4;i++){
            for(j=0;j<4-i;j++){
                check=strcmp(names[j],names[j+1]);
                if(check>0){
                    strcpy(temp,names[j]);
                    strcpy(names[j],names[j+1]);
                    strcpy(names[j+1],temp);
                }
            }
        }
        printf("\n\n\n");
        printf("List of names in alphabetical order.\n\n\n");

    for(i=0;i<5;i++){
        puts(names[i]);
        }

}


