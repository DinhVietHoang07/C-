#include <stdio.h>
void main()
{
	char name [150];
	int age, i;
	printf("nhap ten: ");
	gets(name);
	printf("so tuoi:", age);
	scanf("%d", &age);
	for( i=0; i<age; i++ )
	{
		printf("xin chao %s time %d \n",name, i+1);
    }
}
