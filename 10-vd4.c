#include <stdio.h>
#include <conio.h>
void main()
{
	int cnt;
	//clrscr();
	for (cnt = 1; cnt <= 10; cnt ++)
	{
		if(cnt == 5)
		break;
		printf("%d\t", cnt);
	}
}
