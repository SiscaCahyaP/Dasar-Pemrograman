/* Fahmy oh Fahmy
 * Fahmy adalah salah satu mahasiswa teknik informatika, sebagai seorang mahasiswa yang baik Fahmy selalu mengerjakan tugas-tugasnya. Suatu saat dia diberikan tugas oleh dosennya, ia diberikan tujuh buah angka ( 1 - 109 ) dan ia diminta untuk mencari nilai terbesar dan terkecil dari ketujuh angka tersebut, tidak hanya itu, dia juga diminta untuk mengecek apakah nilai terbesar dan terkecil tersebut merupakan bilangan ganjil atau genap setelah itu dia diminta menyebutkan angka satuan yang ada pada nilai terbesar dan terkecilnya. Karena keingintahuan Fahmy yang besar, dia ingin mengetahui berapa jumlah ketujuh bilangan tersebut, setelah itu dia ingin mencari rata rata dengan ketelitian 2 angka dibelakang koma. Karena Fahmy adalah mahasiswa baru yang belum punya kenalan, bantulah dia untuk membuat program untuk mempermudah Fahmy menyelesaikan tugasnya.
 * Contoh :
 * 
 * Input  :
 * 1 2 3 4 5 6 7
 * 
 * Output :
 * Nilai Terbesar adalah ganjil : 7
 * Dengan nilai satuan : 7
 * Nilai Terkecil adalah ganjil : 1
 * Dengan nilai satuan : 1
 * Jumlah ketujuh bilangan tersebut adalah : 28
 * Rata-rata ketujuh bilangan tersebut adalah : 4.00
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int n;				// jumlah masukan
	int jumlah;			// jumlah total
	int max, min;
	int input, input1;	// input 	: masukan
						// input1 	: variabel untuk menyimpan masukan
						//			  pertama
	
	/* inisialisasi awal */
	n = 1;
	jumlah = 0;
	
	while (n <= 7)
	{
		scanf("%d", &input);
		
		/* menentukan nilai terbesar */
		if (n == 1)
		{
			input1 = input;
		}
		else if (n == 2)
		{
			if (input1 > input)
			{
				max = input1;
			} else {
				max = input;
			}
		}
		else if (n > 2)
		{
			if (input > max)
			{
				max = input;
			}
		}
		
		/* menentukan nilai kerkecil */
		if (n == 1)
		{
			input1 = input;
		}
		else if (n == 2)
		{
			if (input1 < input)
			{
				min = input1;
			} else {
				min = input;
			}
		}
		else if (n > 2)
		{
			if (input < min)
			{
				min = input;
			}
		}
		
		jumlah = jumlah + input;
		
		n = n + 1;
	}
	
	
	if (max % 2 == 0)
	{
		printf("Nilai terbesar adalah genap : %d\n", max); 	// max genap
	} else {
		printf("Nilai terbesar adalah ganjil : %d\n", max);	// max ganjil
	}
	
	printf("Dengan nilai satuan : %d\n", max % 10);
	
	if (min % 2 == 0)
	{
		printf("Nilai terkecil adalah genap : %d\n", min);	// max genap
	} else {
		printf("Nilai terkecil adalah ganjil : %d\n", min);	// min ganjil
	}
	
	printf("Dengan nilai satuan : %d\n", min % 10);
	
	printf("Jumlah ketujuh bilangan tersebut adalah : %d\n", jumlah);
	
	printf("Rata-rata ketujuh bilangan tersebut adalah : %.2f\n",
	(float)jumlah / 7);
	
	return 0;
}

