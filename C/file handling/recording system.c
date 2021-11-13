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
   long int balance;
   date lastpayment;
}record;
record input(record customer);
void writefile(record customer);
FILE *fp;
void main(){
    record customer;
    fp=fopen("recording.txt", "w");
    printf("\nRECORDING SYSTEML\n");
    printf("Enter today\'s date:(mm/dd/yy)\n");
    scanf("%d%d%d",&customer.lastpayment.month,&customer.lastpayment.day,&customer.lastpayment.year);

    while(1){
        printf("NAME:(enter \"end\" when finished)\n");
        scanf(" %[^\n]", customer.name);
        fprintf(fp,"\n%s\n",customer.name);
        if(strcmp(customer.name,"end")==0)
            break;
        customer=input(customer);
        writefile(customer);
    }
    fclose(fp);
    getch();
    }
record input(record customer){
     printf("Enter account type(C=CURRNT,F=FIXED DEPOSIT:)");
     scanf(" %c",&customer.acc_type);
     printf("Enter your balance:");
     scanf("%ld",&customer.balance);
     return(customer);

}
void writefile(record customer){
        fprintf(fp,"%c\n",customer.acc_type);
        fprintf(fp,"%ld\n",customer.balance);
        fprintf(fp,"%d/%d/%d\n",customer.lastpayment.month,customer.lastpayment.day,customer.lastpayment.year);

     switch(customer.acc_type){
       case 'c':
            fprintf(fp,"Your account is CURRENT.\n");
            break;
       case 'f':
           fprintf(fp,"Your account is FIXED DEPOSIT\n\n");
           break;
        default:
          fprintf(fp,"Not in option");
       }
}
