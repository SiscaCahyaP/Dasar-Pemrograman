#include <stdio.h>

int main(int argc, char **argv)
{
	int ribuan, lima, dua, satu;	// pecahan uang
	int uang;
	
	printf("Masukkan uang dalam ratusan : ");
	scanf("%d", &uang);
	
	ribuan = uang / 1000;
	uang = uang % 1000;
	
	lima = uang / 500;
	uang = uang % 500;
	
	dua = uang / 200;
	uang = uang % 200;
	
	satu = uang / 100;
	
	if (ribuan > 0)
	{
		printf("Ada %d lembar ribuan\n", ribuan);
	}
	
	if (lima > 0)
	{
		printf("Ada %d koin lima ratus\n", lima);
	}
	
	if (dua > 0)
	{
		printf("Ada %d koin dua ratus\n", dua);
	}
	
	if (satu > 0)
	{
		printf("Ada %d koin seratus\n", satu);
	}
	
	return 0;
}

