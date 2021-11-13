#include<stdio.h>
#include<conio.h>
void main(){
    int i;
  FILE *fp;
  fp=fopen("read.txt","w");
  if(fp==NULL)
    printf("Error");
  for(i=65;i<=90;i++){
    fprintf(fp,"%c\n",i);
  }
  fclose(fp);
  getch();
}
