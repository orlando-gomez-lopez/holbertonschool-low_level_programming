#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch = sizeof(char);
int dh = sizeof(int);
int eh = sizeof(long int);
int fh = sizeof(double);
int gh = sizeof(float);
printf("Size of a char: %i byte(s)\n", ch);
printf("Size of an int: %i byte(s)\n", dh);
printf("Size of a long int: %i byte(s)\n", eh);
printf("Size of a long long int: %i byte(s)\n", fh);
printf("Size of a float: %i byte(s)\n", gh);
return (0);
}
