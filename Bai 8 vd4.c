#include <stdio.h>
#include <stdlib.h>

void main()
{
	float com = 0, sales_amt;
	char grade;
	//clrscr();
	printf("\nEnter the Sales Amount: ");
	scanf("%f", &sales_amt);
	printf("\n Enter the Grade: ");
	scanf("%c", &grade);
	if (sales_amt > 10000)
		if (grade == 'A')
			com = sales_amt * 0.1;
		else
			com = sales_amt * 0.08;
		else
			com = sales_amt * 0.05;
		printf("\n Commission = %f", com);			
}
