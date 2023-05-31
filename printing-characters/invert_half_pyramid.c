#include <stdio.h>

int printPyramid(int rows){
    for(int i=0; i<=rows; i++){
        printf("%c",i);
    }
}

int main(){
    for(int i=5; i > 0;i--){
        int rows = printPyramid(i);
        printf("\n");
    }
    return 0;
}