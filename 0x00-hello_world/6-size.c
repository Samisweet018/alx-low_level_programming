#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	  char char;
	  int int;
	  long int long int;
	  long long int long long int;
	  float float;

        printf("Size of a char: %lu byte(s)\n", sizeof(char));
        printf("Size of an int: %lu byte(s)\n", sizeof(int));
        printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
        printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
        printf("Size of a float: %lu byte(s)\n", sizeof(float));
        return (0);
}
