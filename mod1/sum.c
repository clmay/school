#include <stdio.h>

int main() {

	// Define two integers
	int x = 18234;
	int y = 82311;

	// Take input
	// To capture user input, use the `scanf()` function.
	// `scanf()` uses the same placeholders as `printf()`.
	// Remember: `scanf()` requires `&` before the variable name.
	printf("Please enter an integer value.\n");
	scanf("%d", &x);
	printf("Please enter an integer value.\n");
	scanf("%d", &y);
	
	// Display their values
	printf("The value of x is: %d\n", x);
	printf("The value of y is: %d\n", y);

	// Display their sum
	printf("The value of x + y, %d + %d, is: %d\n", x, y, x + y);

	return 0;
}
