#include <stdio.h>

int main(){
    int var = 10;
    int *ptr = &var;

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", &var);
    printf("Value of ptr: %p\n", ptr);
    printf("Address of ptr: %p\n", &ptr);

    return 0;
    
}