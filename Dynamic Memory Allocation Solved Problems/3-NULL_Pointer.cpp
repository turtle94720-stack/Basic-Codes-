#include <stdio.h>
#include<stdlib.h>

int main(){
    int *ptr=NULL;
//It is a good practise to initiate a pointer with NULLl.
//This will return output = 0.
    printf("%d", ptr);
//Size of the Null depend upon the user platform.
//This will return the size of null in the user platform.
printf("%d", sizeof(NULL));
    return 0;
}
