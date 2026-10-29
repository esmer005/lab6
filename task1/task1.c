/**********************************************************************************************************
Purpose:An Introduction to Using Multiple Files
By: Esmeralda Flores
Modified: 10/29/2026
**********************************************************************************************************/

/* Necessary when using structure definition + common practice to allow compilers to check function prototypes
   against their definitions*/
#include "task1.h"
#include <stdio.h>
#include <ctype.h> // This allows us to convert character to lowercase

#define BUFFER 128

/**********************************************************************************************************
Write the function, str_lower, to take two arguments: the original input string and a buffer to store the 
lowercase version of the input string. The buffer is needed because an array (a string) declared locally 
to str_lower would be stored on the run-time stack and, thus, could not be safely returned. Write the 
str_lower function to copy into the buffer the lowercase version of each character in the original string.

str_lower function prototype: void str_lower(char *orig, char *copy);
**********************************************************************************************************/

/**********************************************************************************************************
Write the function, str_lower_mutate. This function takes a single string argument and changes the
characters to lowercase by modifying the contents of the string itself. As such, the "result" is the
original argument. This style is not uncommon in C since strings are mutable, but it can lead to unintended 
side-effects when there are multiple aliases to the same string.

str_lower_mutate prototype: void str_lower_mutate(char *orig);
**********************************************************************************************************/




// Functions go above main
void str_lower(char *orig, char *copy){
	int i = 0;
	while (orig[i] != '\0'){
		copy[i] = tolower(orig[i]);
		i++;
	}

	copy[i]= '\0';
}

// str_lower_mutate
void str_lower_mutate(char *orig){
	int i = 0;
	while (orig[i] != '\0'){
		orig[i] = tolower(orig[i]);
		i++;
	}
}

/* Comment because task1.c has its own main and its not compiling because of this
int main(){
	char str[BUFFER];
	char lower[BUFFER]; // Need another array for the copy 
	
	fgets(str, BUFFER,stdin);
	str_lower(str,lower);
	
	printf("%s", lower);

	return 0;
}
*/
