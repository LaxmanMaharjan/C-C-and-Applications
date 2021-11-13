#include<stdio.h>
#include<conio.h>
void main(){
   int i;
   char name[8]={"laxman"};
   FILE *fp;
   if((fp=fopen("example1.txt","w"))==NULL)
    printf("error");
   fwrite(name,sizeof(name),1,fp);
   fclose(fp);


}
