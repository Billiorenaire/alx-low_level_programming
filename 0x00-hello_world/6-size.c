#include<stdio.h>

main()
{
	clrscr();
	printf("     char is %2d bytes \n", sizeof(char));
	printf("     int is %2d bytes \n", sizeof(int));
	printf("     long int is %2d bytes \n", sizeof(long int));
	printf("     long long int is %2d bytes \n", sizeof(long long int));
	printf("     float is %2d bytes \n", sizeof(float));
	getch();
	return (0);
}
