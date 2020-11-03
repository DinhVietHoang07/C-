#include <stdio.h>

int main()
{
    char arr[5][30];
    int n, i;
    do{
        printf("\nNhap so luong SV: ");
        scanf("%d", &n);
    }while(n < 1);
    
	for(i = 0; i < n; i++)
	{
        printf("Ten SV thu %d: ", i+1);
        fflush(stdin);
        gets(arr[i]);
    }
    for(i = 0; i < n; i++)
	{
        printf("\nTen SV thu %d: %s", i+1, arr[i]);
    }
}
