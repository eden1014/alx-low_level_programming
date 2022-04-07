#include<stdio.h>
/**
 * main - entry point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(char));
printf("Size of int: %d byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a longint: %d byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a longlongint: %d byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
