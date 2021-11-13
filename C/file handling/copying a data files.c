/*CREATION OF THE FILE WRITE AND READ AND COPY IN THE SAME PROGRAM*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i;
    char fname2[50],fname[50];
    char ch;
  FILE *fp,*fp1;
  printf("Enter the file name with extension");
  gets(fname);
    fp=fopen(fname,"w");
  if(fp==NULL)
    printf("Error");
    gets(fname2);
    fp1=fopen(fname2,"w");
    if(fp1==NULL)
        printf("error");
  for(i=65;i<=90;i++){
    fprintf(fp,"%c\n",i);
  }
  fclose(fp);
  fp=fopen(fname,"r");
  while(!feof(fp)){
    fscanf(fp,"%c",&ch);
    fprintf(fp1,"%c",ch);
  }
  fclose(fp);
  fclose(fp1);
  getch();
}
