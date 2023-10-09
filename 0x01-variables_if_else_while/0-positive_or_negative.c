#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/* more headers goes there */

/* This is the main function of this program it checks whether the number is positive  or negative or its zero */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d, n is Positive", n);
}
else if (n == 0)
{
printf("%d, n is negative", n);
}
else
{
printf("%d, n is positive", n);
}
return (0);
}
