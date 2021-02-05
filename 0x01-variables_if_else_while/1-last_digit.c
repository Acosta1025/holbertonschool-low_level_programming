#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Print the last digit of the number stored in the variable n.
 *
 *Return: 0
 */
int main(void)
{

int n, last_dig;

srand(time(0));
n = rand() - RAND_MAX / 2;
last_dig = n % 10;

if (last_dig > 5)
printf("is greater than 5\n", n, last_dig);
else if (last_dig == 0)
printf("and is 0\n", n, last_dig);
else if (last_dig < 6)
printf("is less than 6 and not 0\n", n, last_dig);

return (0);
}
