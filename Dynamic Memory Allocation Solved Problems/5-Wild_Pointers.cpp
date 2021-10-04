#include <stdio.h>
#include<stdlib.h>
int main(){
    int *p; //this is a wild pointer because it is not pointing to an arbritrary location.
    *p= 10;
    printf("%d", *p);//this may cause error
    return 0;
}
