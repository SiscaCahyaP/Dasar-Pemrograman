/* PROGRAM MENGHITUNG SELISIH ANTARA DUA WAKTU */

/* Menghitung selisih antara dua waktu, berupa hari, bulan, tahun.
 * Masukan berupa waktu awal dan waktu akhir. Keluaran berupa selisih 
 * antara dua waktu tersebut. */
#include <stdio.h>

int main()
{
	// DECLARATION //
	typedef struct {
		int dd;
		int mm;
		int yy;
	} waktu;
	waktu m;				// m = mulai
	waktu s;				// s = selesai
	int hariM;				// jumlah hari mulai
	int hariS;				// jumlah hari selesai
	int hariSelisih;		// selisih dalam bentuk hari
	int tahun, bulan, hari;	// selisih dalam berikut
	
	
	// ALGORITHM //
	
	// Input data //
	printf("Waktu mulai dalam format dd:mm:yy : ");
	scanf("%d:%d:%d", &m.dd, &m.mm, &m.yy);
	printf("Waktu selesai dalam format dd:mm:yy : ");
	scanf("%d:%d:%d", &s.dd, &s.mm, &s.yy);
	
	// Menghitung selisih dalam hari
	hariM = m.dd + (m.mm * 30) + (m.yy * 365);
	hariS = s.dd + (s.mm * 30) + (s.yy * 365);
	hariSelisih = hariS - hariM;
	
	// Menentukan selisih dalam tahun, bulan, hari
	tahun = hariSelisih / 365;
	bulan = (hariSelisih % 365) / 30;
	hari = hariSelisih - (tahun * 365 + bulan * 30);
	
	// output
	printf("Jarak antara dua waktu tersebut yaitu %d tahun, %d bulan, %d hari", tahun, bulan, hari);
	
	// sukses
	return 0;
}
