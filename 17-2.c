#include<stdio.h>

void main()
{
	char name[20];
	//clrscr();
	printf("Enter your name: ");
	scanf("&s", name);
	printf("Hi there: &s", name);
	getch();
}
