#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: 0
 */
int main(void)

{

char abc = 'a';

while (abc <= 'z')
{

if (abc != 'q' && abc != 'e')
putchar(abc);

abc++;
}

putchar('\n');
return (0);
}
