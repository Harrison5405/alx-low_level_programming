#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* Check whether  the number is  positive */
if (n > 0)
{
printf("%d, n is Positive", n);
}
else if (n == 0)
{
printf("%d, n is Zero", n);
}
else
{
printf("%d, n is negative", n);
}
return (0);
}
