#include <stdio.h>
void main()
{
	int arr[4][30];
	int row, col;
	
	for(row=0;row<4;row++)
	{
		for(col=0;col<30;col++)
		{
			printf("\ten hoc sinh [%d][%d]: ", row, col);
			scanf("%d", &arr[row][col]);
		}
	}
	for(row=0; row < 4; row++)
	{
		for(col = 0; col < 30; col++)
		{
			printf("\diem hoc ky 1 [%d][%d] is %d", row, col, arr[row][col]);
		}
	}
	
}
