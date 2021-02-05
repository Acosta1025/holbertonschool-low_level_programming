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
char ABC = 'A';

while (abc <= 'z')
putchar(abc++);

while (ABC <= 'Z')
putchar(ABC++);

putchar('\n');

return (0);
}
