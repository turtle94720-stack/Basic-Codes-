#include<iostream>

using namespace std;

#define max 10


int enqueue(int[],int,int);
int dequeue(int[],int,int);
void display(int[],int,int);
void peek(int[],int,int);
int f=-1,r=-1;

int main(){
    int ch;
    int queue[max];
    
    do{
        cout<<"\n1)Insert\n";
        cout<<"2)Delete\n";
        cout<<"3)Display\n";
        cout<<"4)Peek\n";
        cout<<"5)Exit\n";
        cout<<"Enter choice : ";
        cin>>ch;

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
                cout<<"Exiting...";
            }break;

            default:{
                cout<<"Invalid Choice \n";
            }
        }
    }while(ch!=5);
}

int enqueue(int queue[],int f, int r)
{
    int x;
    if(f==-1 && r==-1){
        f=0;
        r=0;
        cout<<"Enter the element :";
        cin>>x;
        queue[r]=x;
    }
    else if((r+1)%max==f){
        cout<<"Queue is full";
    }
    else{
        r=(r+1)%max;
        cout<<"Enter :";
        cout<<x;
        queue[r]=x;
    }return r;
}

int dequeue(int queue[],int f,int r)
{
    if(f==-1 && r==-1)
    {
        cout<<"Empty";
    }

    else if(f==r){
        f=r=-1;
    }

    else{
        cout<<"Dequeued element is :"<< queue[f+1];
        f=(f+1)%max;
    }return f;
}

void display(int queue[],int f,int r)
{
    int i=f+1;
    if(f==-1 && r==-1)
    {
        cout<<"Queue is empty!";
    }

    else{
        cout<<"queue is : \n";
        while(i!=r)
        {
            cout<<queue[i];
            i=(i+1)%max;
        }
        cout<<queue[r];
    }
}

void peek(int queue[],int f,int r)
{
    cout<<queue[f+1];
}
