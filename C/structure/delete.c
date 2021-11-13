#include<stdio.h>
void main()
{
    int i,j,k=0;
    for(i=0;i<8;i++){
        for(j=0; ;j++){

            if(j%2==0)
                printf("W");
            else
                printf("B");

                k++;
                if(k==8)
                    break;


        }printf("\n");

        if(i==8)
        break;
    }

}
