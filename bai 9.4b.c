
void main ()
{
	int i, j, k;
	i=10;
	printf(" nhap mot so ");
	scanf("%d", &i);
	printf("\n");
	for (j=0; j<=i;j++)
	{
		printf("\n");
		for(k=0;k<j;k++)
		{
			printf("%d",k-1);
		}
	}
	
}
	
