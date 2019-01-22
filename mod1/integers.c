#include<stdio.h>

// This is a comment. The compiler will ignore it.
//
// To compile this code, run `gcc <file.c> -o <file>
// To run the code: `./<file>`

int main() {
	
	// Variable assignment looks like this:
	// int <label> = <value>;
	int age = 21;
	int weight = 0;
	
	// printf() prints output to std out.
	printf("How old are you?\n");

	// Use placeholder to display to display variable information
	// For example: `%d` for integers
	// 		`%p` for address of a variable
	// 		Use the `&` operator to get it.
	printf("I am %d years old.\n", age);
	printf("The address of `age` is %p\n", &age);

	// Change the value:
	age = 23;
	printf("I am %d years old.\n", age);
	printf("I am %d years old.\n", 123);
	printf("I am %d years old and %d pounds.\n", age, weight);
	
	return 0;
}
