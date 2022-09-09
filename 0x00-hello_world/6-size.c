#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	printf("     char is %ld bytes \n", sizeof(char));
	printf("     int is %ld bytes \n", sizeof(int));
	printf("     long int is %ld bytes \n", sizeof(long int));
	printf("     long long int is %ld bytes \n", sizeof(long long int));
	printf("     float is %ld bytes \n", sizeof(float));
	getch();
	return (0);
}
