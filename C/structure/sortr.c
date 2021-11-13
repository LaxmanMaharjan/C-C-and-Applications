#include<stdio.h>
#include<string.h>
struct employee{
char name[50];

}emp[5],temp;
void main(){
    int i,j,check;
    for(i=0;i<5;i++)
    scanf("%s",emp[i].name);
         for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                check=strcmp(emp[j].name,emp[j+1].name);
                if(check>0){
                    temp=emp[j];
                    emp[j]=emp[j+1];
                    emp[j]=temp;
                }
            }
 }
 for(i=0;i<5;i++)
 printf("%s\n",emp[i].name);
}
