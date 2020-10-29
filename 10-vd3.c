#include <stdio.h>
#include <conio.h>
void main()
{
	int cnt = 0, num;
	//clrscr();
	
	do
	{
		printf("\n Enter a Number: ");
		scanf("%d", &num);
		printf("No. is %d", num);
		cnt++;
	}while (num != 0);
	printf("\n The total number enterd were %d", --cnt);
}

