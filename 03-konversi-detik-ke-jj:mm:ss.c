/* PROGRAM KONVERSI DETIK KE JAM */

/* Mengkonversi detik ke jj:mm:ss. Masukan berupa waktu dalam detik. Keluaran
 * berupa jam:menit:detik. */

#include <stdio.h>

int main()
{
	int durasi;
	int jam;
	int menit;
	int detik;
	
	
	printf("Masukkan durasi dalam detik : ");
	scanf("%d", &durasi);
	
	jam = durasi / 3600;
	menit = (durasi % 3600) / 60;
	detik = durasi % 60;
	
	printf("%d detik sama dengan %d jam, %d menit, %d detik.\n", durasi, jam, menit, detik);
	
	return 0;
}
