/*
PROGRAM MenentukanJenisSegitiga

Menentukan jenis segitiga; segitiga siku-siku, tumpul, atau lancip.
Masukan berupa panjang sisi-sisi segiiga. Keluaran berupa nama jenis
segitiga.

*/


#include <stdio.h>

int main()
{
	/* DEKLARASI */
	int x, y, z;	/* variabel masukan */
	int a, b, c;	/* a = sisi miring, b dan c = sisi lainnya */
	

	/* ALGORITMA */
	printf("Masukkan panjang sisi sisi segitiga: "); scanf("%d %d %d", &x, &y, &z);

	/* menentukan sisi miring */
	if (x >= y && x >= z)
	{
		a = x;
		b = y;
		c = z;
	} else if (y >= x && y >= z)
	{
		a = y;
		b = x;
		c = z;
	} else
	{
		a = z;
		b = x;
		c = y;
	}
	
	/* menentukan jenis segitiga */
	if (a*a == (b*b + c*c))
	{
		printf("Segitiga siku-siku.\n");
	} else if (a*a > (b*b + c*c)) 
	{
		printf("Segitiga tumpul.\n");
	} else {
		printf("Segitiga lancip.\n");
	}

	return 0;
}
