#include <stdio.h>
void main()
{
	int i, sum, Max, Min, ary[10], demMin=0,demMax=0;
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &ary[i]);
		sum += ary[i];
	}
	float avg = sum/10;
	printf("tong cac so la:%d\n", sum);
	printf("trung binh cong la:%f\n", avg);
	
	Max = ary[0];
	Min = ary[0];
	for (i = 1; i < 10; i++)
	{
		if(ary[i]>Max) Max = ary[i];
		if(ary[i]<Min) Min = ary[i];
	}
	for (i=0;i<10;i++)
	{
		if(ary[i] == Max) Max, demMax++;
		if(ary[i] == Min) Min, demMin++;
	}
	printf("so nho nhat la:%d co %d trong mang la \n", Min, demMin);
	pinntf("so lon nhat la:%d co %d trong mang la \n", Max, demMax);
}
