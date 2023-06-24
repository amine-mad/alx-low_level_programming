#include<stdio.h>
/**
 *main-Entry point
 *Description:using sizeof to print the size of various types.
 *Return:Always 0(success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char:%ubyte(s)\n", sizeof(a));
printf("Size of an int:%ubyte(s)\n", sizeof(b));
printf("Size of a long int:%ubyte(s)\n", sizeof(c));
printf("Size of a long long int:%ubyte(s)\n", sizeof(d));
printf("Size of a float :%ubyte(s)\n", sizeof(f));
return (0);
}
