#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
      char name[50];
      int age;
      int salary;
}emp[3],temp,temp1[3],emp1[3];
void main()
{
    FILE *fp,*fp1;
    fp=fopen("sort.bin","w+");
    if(fp==NULL)
        printf("Error");
    int i,j,check;
    printf("Enter the names,age and salary:\n");
    for(i=0;i<3;i++)
        {
            scanf("%s",emp[i].name);
            printf("enter age and salary");
            scanf("%d%d",&emp[i].age,&emp[i].salary);
        }
        fwrite(&emp,sizeof(emp[0]),3,fp);
        fseek(fp,0,SEEK_SET);
        fread(temp1,sizeof(temp1[0]),3,fp);
             for(i=0;i<3;i++){
        printf("Name=%s\tage=%d\tsalary=%d\n",temp1[i].name,temp1[i].age,temp1[i].salary);
             }

        for(i=0;i<2;i++){
            for(j=0;j<2-i;j++){
                check=strcmp(temp1[j].name,temp1[j+1].name);
                if(check>0){
                    temp=temp1[j];
                    temp1[j]=temp1[j+1];
                    temp1[j+1]=temp;
                }
            }
        }printf("\n");
         for(i=0;i<3;i++){
        printf("Name=%s\tage=%d\tsalary=%d\n",temp1[i].name,temp1[i].age,temp1[i].salary);

        }


    fp1=fopen("sort1.bin","w+");
    if(fp==NULL)
        printf("Error");
        fwrite(temp1,sizeof(temp1[0]),3,fp1);
          fseek(fp1,0,SEEK_SET);
            fread(emp1,sizeof(emp1[0]),3,fp1);

        printf("\n\n\n");
        printf("List of names in alphabetical order.\n\n\n");

    for(i=0;i<3;i++){
        printf("Name=%s\tage=%d\tsalary=%d\n",emp1[i].name,emp1[i].age,emp1[i].salary);

        }

}


