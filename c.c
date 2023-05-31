#include <stdio.h>
 #include <ctype.h> 
 #include <stdlib.h>
int main() {
	int set = 23;
	int* setptr = &set;
	int i;
	char name[] = "aAbBcCdDeE1234567890";
/* go through the character set, and find a set item named mellow,then print each letter of the setname */	
	for(i = 0; i < sizeof(name); i++) {
		printf("%d \n", name[i]);
				
	}
	return 0;
}

    /* Intergrated with bots */
