#include<stdio.h>
#include<stdlib.h>
#define max 10

int push(int[],int);
int pop(int[],int);
void disp(int[],int);
void peak(int[],int);

int main(){
    int stack[max],top=-1;
    int ch;

    do{
        printf("\n1. Push \n");
        printf("2. Pop \n");
        printf("3. Display \n");
        printf("4. Peak \n");
        printf("5. Quit \n");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:{
                top = push(stack,top);
                }break;
            
            case 2:{
                top=pop(stack,top);
            }break;

            case 3:{
                disp(stack,top);
            }break;

            case 4:{
                peak(stack,top);
            }break;

            case 5:{
                exit(1);
            }break;

            default:
            printf("Invalid Choice \n");
        }
    }while(ch<=4);
}

int push(int stack[],int top)
{
    int n;
    if(top==max-1)
        printf("Stack is full! \n");
    else{
        printf("Enter the element to be pushed :");
        scanf("%d",&n);
            top++;
            stack[top]=n;
    }
    return top;
}

int pop(int stack[],int top){
    int n;
    if(top==-1)
        printf("Stack is empty! \n");
    else{
        n=stack[top];
            top--;
            printf("The deleted element is : [%d]\n",n);
    }
    return top;
}

void disp(int stack[],int top){
    if(top==-1)
        printf("Stack is empty! \n");
    else{
        printf("Elements in the stack are :");
        while(top>=0){
            printf("%d \n",stack[top]);
                top--;
        }
    }
}

void peak(int stack[],int top){
    if(top==-1)
        printf("Stack is empty! \n");
    else{
        printf("%d", stack[top]);
    }
}
