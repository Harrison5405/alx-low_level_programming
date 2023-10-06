/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
print("size of char: %lu bytes \n", (unsigned long)sizeof(a));
print("size of int: %lu bytes \n", (unsigned long)sizeof(b));
print("size of long int: %lu bytes \n", (unsigned long)sizeof(c));
print("size of long long int: %lu bytes \n", (unsigned long)sizeof(d));
print("size of float: %lu bytes \n", (unsigned long)sizeof(f));
return (0);
}
