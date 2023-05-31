#include <stdio.h>

int x[] = {1,2,5,10,20,50};
int y,z,cost,t;
char *position = "A";

int change(){
    /* take amount */
    printf("Enter money: ");
    scanf("%d", &y); 
    /* Control value  */
    printf("Enter Cost: ");
    scanf("%d", &cost);
    /* calculate target  */
    int target = y - cost;
    return target;
}

int createArray(int length, int pnt){
    printf("denom is now is %d \n",pnt); 

}

int combination(int control, int denom[]){
    int i = 0 ;
    while(control >= denom[i] && i <= 6){
            createArray(i, denom[i]);
    	    i++;
        }
    }

int main(){
    t = change();
    combination(t,x);
    return 0;
}
