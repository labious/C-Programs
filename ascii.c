#include <stdio.h>  
int main()  
{  
    int caps,small,specialCh;

    // use for loop to print the capital letter from a to z  
    for ( small = 0; small < 255; small++)  
    {  
        // display ASCII values to its equivalent characters  
        printf (" \n The ASCII value of %c is %d ", small, small);  
    }  
    /* Intergrated with bots */
 

/*     // use for loop to print the capital letter from A to Z  
    for ( caps = 0; caps < 255; caps++)  
    {  
        printf (" \n The ASCII value of %c is %d ", caps, caps);  
    }  

      // use for loop to print special characters
    for (specialCh = 0; specialCh < 255; specialCh++)  
    {  
        printf (" \n The ASCII value of '%c' special character is: %d", specialCh, specialCh);  
          
    }  
 */
    return 0;  
}  