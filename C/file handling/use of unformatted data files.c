#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct{
   int month;
   int day;
   int year;
   }date;
typedef struct{
   char name[50];
   char acc_type;
   float balance;
   date lastpayment;
}record;
record input(record customer);
FILE *fp;
void main(){
       record customer;
       fp=fopen("recording_example.txt", "w");
       if(fp==NULL)
        printf("Error");
       printf("\t\tRECORDING SYSTEM\n\n");
       printf("Enter the date(mm/dd/yy):");
       scanf("%d%d%d",&customer.lastpayment.month,&customer.lastpayment.day,&customer.lastpayment.year);
       customer.acc_type='c';
       customer.balance=0.0;
       while(1){
        printf("Enter the name(Enter end if finished) :");
        scanf(" %[^\n]",customer.name);
        if(strcmp(customer.name,"end")==0)
            break;
        customer=input(customer);
        fwrite(&customer, sizeof(record) , 1, fp);
       }
       fclose(fp);
}
record input(record customer){
          printf("Enter account type(C=CURRENT,S=SAVING,F=FIXED DEPOSIT):");
          scanf(" %c",&customer.acc_type);
          printf("Enter the balance:");
          scanf("%f",&customer.balance);
          return(customer);
}
