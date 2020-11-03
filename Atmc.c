#include <stdio.h>
int main()
{
	printf("Ngan hang Agribank");
	int math, mapin;
	printf("\n Nhap ma the: ");
	scanf("%d", &math);
	printf("Nhap ma pin: ");
	scanf("%d", &mapin);
	if (math == 1111 && mapin == 1234)
	{
		int a;
				printf("nhap lua chon cua ban: \n 1.Kiem tra so du \n 2.Rut tien \n 3.chuyen khoan \n 4.Ket thuc chuong trinh \n ");
		scanf("%d", &a);
		if (a == 1)	
		{
			int sodu = 500;
				printf(" So du cua ban la: %d", sodu);				
			}	
			if (a == 2)
			{
				int sotien;
					printf("Nhap so tien ban muon rut: ");
					scanf("%d", &sotien);
					if("sotien% 50 == = && so tien < 400")
					{
						char ans = 'y';
							printf("Phi giao dich, ban co muon giao dich khong (y or no)");
							fflush (stdin);
							scanf("%c", ans);
							int tienphi = 5;
							int sodu = 500;
							if (ans == 'y')
							{
							
								printf("So du con lai la: %d", sodu - sotien - tienphi);
				            
							}
				            
							printf("Cam on ban da su dung dich vu!");
				           
					}
					if(a == 3)
					{
						int stk;
		            printf("Nhap so tai khoan nguoi nhan: ");
		            	scanf("%d", &stk);
		            	if(stk == 456)
		            	{
		            		int sodu = 500;
		            		int tienchuyen;
		            		printf("Nhap so tien muon chuyen: ");
		            		scanf("%d", &tienchuyen);
		            		if (tienchuyen <= 500)
		            		{
		            			
								printf("So du con lai cua ban la: %d");
		            			
							}
								
								
								printf("ban can tien so tien nho hon 500 trieu ");
								
						}
							printf("So tai khoan khong hop le");
					}
						if(a == 4)
					{
						printf("Cam on quy khach da su dung dich vu!");
					}	
					
			}
			printf("Ma the hoac ma pin khong dung");
			
	}
}

	
