#include <stdio.h>

int main(){
    int i = 42;
    int* ptr = &i;
    printf("pointer is %p\n",ptr);
    printf("value through variable is %d\n",i);
    printf("value through pointer is %d",*ptr);
    return 0;
}