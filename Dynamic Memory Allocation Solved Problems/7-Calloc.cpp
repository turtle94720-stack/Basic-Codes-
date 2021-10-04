#include<stdio.h>
#include<stdlib.h>

int main(){
    int i ,n;
    printf("Enter the number of integers :");
    scanf("%d", &n);
    int *ptr = (int *)calloc(10, sizeof(int));
    /*Here is an quivalent malloc function
    both are doing the same job but syntax is different
    [int *ptr = (int*)malloc(10*sizeof(int))]
    */
    if(ptr==NULL){
        printf("Memory is not available: ");
        exit(1);
    }
    for(i=0; i<n; i++){
        printf("Enter an integer :");
        scanf("%d", ptr + i);
    }
    for(i=0;i<n;i++)
        printf("%d \n", *(ptr+i));
    return 0;
}
