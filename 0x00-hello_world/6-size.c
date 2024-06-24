#include <stdio.h>

/**
 *main - main function
 *
 * Return: 0 on success
 */
int main(void)
{
	printf("size of a  char: %lubyte(s)\n", sizeof(char));
	printf("size of int: %lubyte(s)\n", sizeof(int));
	printf("size of a long int: %lubyte(s)\n", sizeof(long int));
	printf("size of a long long int: %lubyte(s)\n", sizeof(long long int));
	printf("size of float: %lubyte(s)\n", sizeof(float));
	return (0);


}
