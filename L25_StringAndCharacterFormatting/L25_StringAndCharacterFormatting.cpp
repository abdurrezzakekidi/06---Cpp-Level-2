#include <iostream>
#include <cstdio>

int main() {

	// string is an array of characters
	char name[] = "Abdurrezzak Ekidi";
	char schoolName[] = "Programming Advices";

	// string
	printf("Dear %s, How are you?\n\n", name);
	printf("Welcome to %s School! \n\n", schoolName);

	// characters
	char c = 'C';

	
	printf("Setting the width of c: %1c \n", c);

	printf("Setting the width of c: %*c \n", 1, c);
	printf("Setting the width of c: %*c \n", 2, c);
	printf("Setting the width of c: %*c \n", 3, c);
	printf("Setting the width of c: %*c \n", 4, c);
	printf("Setting the width of c: %*c \n", 5, c);

	return 0;
}