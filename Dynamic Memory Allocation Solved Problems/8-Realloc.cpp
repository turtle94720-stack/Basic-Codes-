//Syntax: void *realloc(void *ptr,size_t newSize)
#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int i;
    int *ptr = (int *)malloc(2*sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Memory not available!");
        exit(1);
    }
    
    printf("Enter the two numbers: \n");
    for(i=0; i<2; i++){
        scanf("%d",ptr+i);
    }
    
    //Memory allocation for 2 more integers
    ptr=(int*)realloc(ptr, 4*sizeof(int));
    if(ptr==NULL){
        printf("Memory not available!");
        exit(1);
    }
    
    printf("Enter 2 more integers : \n");
    for(i=2; i<4; i++)
        scanf("%d", ptr+i);
        
    //printing the values onto screen
    for(i=0; i<4; i++)
    {
        printf("%d \n", *(ptr+i));
    }
    return 0;
}
