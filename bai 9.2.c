#include <stdio.h>
int main()
{
	int num1, num2, sum, i;
	printf("so dau: ");
		scanf("%d", &num1);
	printf("so sau: ");
		scanf("%d", &num2);
	
	for (i=num1; i <= num2; i++)
	if(i % 2 !=0)
	 {
	 	sum = sum +i;
	 }
	printf("tong hai so le:%d");
}
