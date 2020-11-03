#include <stdio.h>
void main()
{
	int n1, n2,i;
	printf("so thu nhat la: ");
	scanf("%d", &n1);
	
	printf("so thu hai la: ");
	scanf("%d", &n2);
	for(n1<=i; n2>=i;i++)
	{
		if(i>n1 & i<n2 && i%50==0)
		printf("\n in ra cac so chia het cho 50: %d", i);
	}
}
