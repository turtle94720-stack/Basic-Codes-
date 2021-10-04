#include <stdio.h>
#include<stdlib.h>

int* fun()
{
    int num=10;//num is a local variable to this function
    return &num;//here we are trying to return address of num but it only exist until function runs
}
int main(){
    int *ptr=NULL;
    ptr=fun();//here we are trying to store the address to this pointer but it doesn't exist so obviously it becomes a dangling pointer.
    printf("%d",*ptr);//this will cause segmentation fault.
    return 0;
}
