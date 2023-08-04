#include <stdio.h>
#include <string.h>
 
int main(int argc, char *argv[]) {
	 
	 char var_one[8] = "VarOne";
	char var_two[8] = "VarTwo";
	 
	 
	 printf("[BEFORE] var_two contains \'%s\'\n", var_two);
	 printf("[BEFORE] var_one  contains \'%s\'\n", var_one);
	 
	 
	 
	 strcpy(var_two, argv[1]); /* Copy first argument into var_two. */
	 printf("\n\n");
	 printf("[AFTER] var_two  contains \'%s\'\n", var_two);
	 printf("[AFTER] var_one  contains \'%s\'\n", var_one);
	 
	 return 0;
 }