#include<stdio.h>
#include<conio.h>
void input();
void sort();
struct date{
       int month;
       int day;
       int year;

};
struct account{
       char name[50];
       char act_type;
       float balance;

}customer[2],temp;
void main(){
      printf("Record data\n");
      input();
      sort();
      getch();
}
void input(){
    int i;
      for(i=0;i<2;i++){
            printf("Enter the Name,Account type(s=saving account,c=current account),Balance:");
        scanf(" %[^\n] %c %f",customer[i].name,&customer[i].act_type,&customer[i].balance);
        printf("\n");
        }
       for(i=0;i<2;i++){
      printf("\nName:%s\nAccount Type=%c\nBalance=%.2f\n",customer[i].name,customer[i].act_type,customer[i].balance);
      switch(customer[i].act_type){
      case ('c'):
             printf("Your account is Current Account");
             break;
     case ('s'):
            printf("Your account is Saving Account ");
            break;
    default:
    printf("UNKNWON ACCOUNT");
          }
       }
       printf("\n");
}
void sort(){
      int i,j;
      for(i=0;i<1;i++){
        for(j=0;j<1-i;j++){
            if(customer[j+1].balance>customer[j].balance){
                temp=customer[j];
                customer[j]=customer[j+1];
                customer[j+1]=temp;

            }
        }
      }
      printf("\n\n\nSorted list(desending):");
      for(i=0;i<2;i++)
      printf("\nName:%s\tBalance:%.2f",customer[i].name,customer[i].balance);
      }
