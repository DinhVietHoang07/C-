#include <stdio.h>
void main()
{
	int a, b, max;
	printf("nhat mot so \n");
	printf("bang cuu chuong: ");
	scanf("%d", &max);
	
	for(a=1, b=max; a<=max; a++, b--)
		printf("%d * %d = %d", a, b, a + b);
		
}
