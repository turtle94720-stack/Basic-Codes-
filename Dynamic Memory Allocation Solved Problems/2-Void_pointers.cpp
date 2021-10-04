#include<stdio.h>

int main(){
    int n=10;
    void *ptr = &n;

    //printf("%d", *ptr); 
    //(This will give error as we cannot dereference a void pointer)
    printf("%d", *(int *)ptr);
    return 0;
}
