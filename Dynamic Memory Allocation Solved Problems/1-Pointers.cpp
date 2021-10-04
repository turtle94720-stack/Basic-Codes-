#include<stdio.h>

int main(){
    int *ptr, c;
    int n,count,yes,no;
    int ch;
    printf("Enter value for pointer :");
    
    scanf("%d", &c);

    ptr=&c;
    
    printf("Enter you choice: \n 1.Adress \n 2.Value \n");
    scanf("%d", &n);
    switch(n){
        case 1:
        {
            printf("Adress : [%d]", ptr);
            count=1;
        }break;
        case 2:
        {
            printf("Value : [%d]", *ptr);
        }break;
    }
    if(n==1){
        printf("\nDo you wish to print the value too ? ");
        }
        else{
            printf("\nDo you wish to print address too ?");}
    printf("\nEnter  yes(1) or no(2):");
    scanf("%d", &ch );
    if(count==1){
        if(ch==1){
        printf("[%d]", *ptr);}
    }
    else{
        if(ch==1){
            printf("[%d]", ptr);
        }
        else
        printf(" ");
    }
    printf("\nThank you for using this program ");
}
