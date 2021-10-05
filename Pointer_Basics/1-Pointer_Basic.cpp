#include <stdio.h>
 
int main()
{
    int arri[] = {1, 2 ,3};
    int *ptri = arri;
 
    char arrc[] = {1, 2 ,3};
    char *ptrc = arrc;
 
    printf("sizeof arri[] = %d \n", sizeof(arri));
    printf("sizeof ptri = %d \n", sizeof(ptri));
 
    printf("sizeof arrc[] = %d \n", sizeof(arrc));
    printf("sizeof ptrc = %d \n", sizeof(ptrc));
 
    return 0;
}