/* PROGRAM KonversiDesimalKeRomawi */
/* Mengkonversi angka ke dalam bentuk romawi hingga ribuan. Masukan berupa angka.
   Keluaran berupa angka romawi. */
   
/* KOMENTAR Penulis */
/* algoritma terlalu boros */

#include <stdio.h>
#include <string.h> // library untuk fungsi strcpy()


int main() {
/* DEKLARASI */
	int n;
	int ribuan, ratusan, puluhan, satuan;
	char ribuanStr[4], ratusanStr[4], puluhanStr[4], satuanStr[4];
	int valid;
	
	
/* ALGORITMA */
	valid = 0;

	while(valid == 0)
	{
		printf("Masukkan angka yang akan dikonversi\n");
		printf("Nilai harus lebih dari nol dan tidak boleh lebih dari 3999 : ");
		scanf("%d", &n);
		
		if(n <= 3999 && n > 0 )
		{
			valid = 1;
		} else {
			printf("Ingat! Nilai harus lebih dari nol tidak boleh lebih dari 3999.\n\n\n");
		}
	}
	
	ribuan = n / 1000;
	ratusan = (n % 1000) / 100;
	puluhan = (n % 100) / 10;
	satuan = n % 10;
	
	switch(ribuan){
		case 1: strcpy(ribuanStr,"M"); break;
		case 2: strcpy(ribuanStr,"MM"); break;
		case 3: strcpy(ribuanStr,"MMM"); break;
		default : strcpy(ribuanStr,"");
		};

	switch(ratusan){
		case 1: strcpy(ratusanStr,"C"); break;
		case 2: strcpy(ratusanStr,"CC"); break;
		case 3: strcpy(ratusanStr,"CCC"); break;
		case 4: strcpy(ratusanStr,"CD"); break;
		case 5: strcpy(ratusanStr,"D"); break;
		case 6: strcpy(ratusanStr,"DC"); break;
		case 7: strcpy(ratusanStr,"DCC"); break;
		case 8: strcpy(ratusanStr,"DCCC"); break;
		case 9: strcpy(ratusanStr,"CM"); break;
		default : strcpy(ratusanStr,"");
		};
	
	switch(puluhan){
		case 1: strcpy(puluhanStr,"X"); break;
		case 2: strcpy(puluhanStr,"XX"); break;
		case 3: strcpy(puluhanStr,"XXX"); break;
		case 4: strcpy(puluhanStr,"XL"); break;
		case 5: strcpy(puluhanStr,"L"); break;
		case 6: strcpy(puluhanStr,"LX"); break;
		case 7: strcpy(puluhanStr,"LXX"); break;
		case 8: strcpy(puluhanStr,"LXXX"); break;
		case 9: strcpy(puluhanStr,"XC"); break;
		default: strcpy(puluhanStr,"");
		};
	
	switch(satuan){
		case 1: strcpy(satuanStr,"I"); break;
		case 2: strcpy(satuanStr,"II"); break;
		case 3: strcpy(satuanStr,"III"); break;
		case 4: strcpy(satuanStr,"IV"); break;
		case 5: strcpy(satuanStr,"V"); break;
		case 6: strcpy(satuanStr,"VI"); break;
		case 7: strcpy(satuanStr,"VII"); break;
		case 8: strcpy(satuanStr,"VIII"); break;
		case 9: strcpy(satuanStr,"IX"); break;
		default: strcpy(satuanStr,""); break;
		};
		
		printf("\nAngka romawi dari %d adalah %s%s%s%s\n", n, ribuanStr, ratusanStr, puluhanStr, satuanStr);
	
	
	return 0;
}	
