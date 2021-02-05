#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Prints the alphabet in lowercase.
 *
 *Return: 0
 */
int main(void)
{

char abc = 'a';

while (abc <= 'z')
putchar(abc++);

putchar('\n');

return (0);
}
