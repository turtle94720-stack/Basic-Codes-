#include<stdio.h>
#include<stdlib.h>
#define max 10


int enqueue(int[],int,int);                        //implementing functions here
int dequeue(int[],int,int);
void display(int[],int,int);
void peek(int[],int,int);
int f=-1,r=-1;

int main(){
    int ch;
    int queue[max];
    
    do{
        printf("\nPlease enter your choice :");                 
        printf("\n1. Enqueue \n");
        printf("2. Dequeue \n");
        printf("3. Display \n");
        printf("4. Peek \n");
        printf("5. Exit \n");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
            {
                r=enqueue(queue,f,r);
            }break;

            case 2:
            {
                f=dequeue(queue,f,r);
            }break;

            case 3:
            {
                display(queue,f,r);
            }break;
            
            case 4:
            {
                peek(queue,f,r);
            }break;

            case 5:
            {
                exit(1);
            }break;

            default:{
                printf("Invalid Choice \n");
            }
        }
    }while(ch<=5);
}

int enqueue(int queue[],int f, int r)
{
    int x;
    if(f==-1 && r==-1){                         //Checking if elements are added or not
        f=0;                                    //here both front and rear is 0 so that the queue is starting from 0 till max range 
        r=0;
        printf("Enter the element :");
        scanf("%d",&x);
        queue[r]=x;
    }
    else if((r+1)%max==f){
        printf("Queue is full");                        //suppose rear is 1 and (1+1)%10 is 2 and front is also 2 then that means queue is full
    }
    else{
        r=(r+1)%max;
        printf("Enter :");
        scanf("%d", &x);
        queue[r]=x;
    }return r;
}

int dequeue(int queue[],int f,int r)
{
    if(f==-1 && r==-1)
    {
        printf("Empty");
    }

    else if(f==r){
        f=r=-1;                                 // If both front and rear are pointing to same location then make them both pointing to -1
    }

    else{
        printf("Dequeued element is : %d", queue[f+1]);
        f=(f+1)%max;
    }return f;
}

void display(int queue[],int f,int r)
{
    int i=f+1;                                          //here is f=f+1 because f is initialized as -1 in global
    if(f==-1 && r==-1)
    {
        printf("Queue is empty!");
    }

    else{
        printf("queue is : \n");
        while(i!=r)
        {
            printf("%d ", queue[i]);
            i=(i+1)%max;
        }
        printf("%d", queue[r]);
    }
}

void peek(int queue[],int f,int r)
{
    printf("Peek : %d", queue[f+1]);
}
