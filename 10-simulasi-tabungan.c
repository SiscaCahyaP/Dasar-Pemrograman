/* PROGRAM Tabungan. */
/* Mensimulasikan tabungan sederhana.
   Digunakan untuk menyetor dan mengambil uang dengan saldo
   minimal Rp 10000,00. Masukan berupa saldo awal. Keluaran
   berupa saldo akhir. */

# include <stdio.h>

int main(){
/* DEKLARASI */
	int saldo;
	int setor;
	int ambil;
	int pil;		// pilihan

/* ALGORITMA */
	printf("Masukkan saldo awal Anda, minimal 10000: "); scanf("%d", &saldo);
	
	if(saldo < 10000){
		printf("Maaf, saldo Anda tidak valid.\n");
	} else {
		do{
			printf("\n=============================\n");
			printf("\nApa yang ingin Anda lakukan?\n");
			printf("  0. Setor\n");
			printf("  1. Ambil\n");
			printf("  2. Selesai\n");
			scanf("%d", &pil);
		
			switch(pil){
				case 0:															// setor uang
					printf("Sebutkan nominal yang ingin Anda setor: ");
					scanf("%d", &setor);									
					saldo = saldo + setor;
					printf("\nSekarang saldo Anda adalah Rp %d,00\n", saldo);
					break;
				case 1:															// ambil uang
					printf("Sebutkan nominal yang ingin Anda ambil: ");	
					scanf("%d", &ambil);
					if(saldo - ambil < 10000){
						printf("\nMaaf, saldo minimal yang harus ada di rekening Anda adalah Rp 10000,00.\n");
						} else {
							saldo = saldo - ambil;
							printf("\nSekarang saldo Anda adalah Rp %d,00\n", saldo);
							};
					break;
				default : printf(" ");
					break;
			}
		} while(pil != 2);
		

		printf("\n\nSaldo akhir Anda adalah Rp %d,00\n", saldo);
		printf("Terima kasih atas kunjungan Anda :)\n");
	};
	
	return 0;
		
}
