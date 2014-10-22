/*
Created by : Tsaqova


Deskripsi
Puguh adalah mahasiswa jurusan teknik Informatika di sebuah Institut ternama. Pada semester satu Puguh mempelajari enam mata kuliah di jurusannya. Salah satu mata kuliah yang paling ditakuti adalah Pemrograman Terstruktur. Terlebih lagi dosen Pemgrograman Terstruktur yang mengajar Puguh terkenal sangat ketat dalam memberikan nilai akhir. Dosen tersebut tidak akan meluluskan mahasiswa yang nilai praktikum Pemrograman Terstrukturnya terus menerus menurun dari awal hingga akhir modul. Mahasiswa dipastikan lulus mata kuliah pemgrograman terstruktur apabila nilai praktikum terus menerus meningkat dari awal hingga akhir modul. Apabila nilai praktikum naik turun atau tetap, maka kelulusan bergantung pada pertimbangan dosen dan tidak ada seorang pun yang tahu.

Di akhir semester asisten praktikum Pemrograman Terstruktur membagikan nilai masing-masing setiap praktikan dari awal hingga akhir modul sebanyak N. Mengetahui hal tersebut, Puguh ingin mengetahui apakah ia lulus mata kuliah pemrograman terstruktur atau tidak. Namun ia tidak dapat memperkirakannya sendiri. Karena Puguh menganggap anda adalah teman baiknya, Puguh meminta bantuan pada anda untuk memperkirakan apakah Puguh akan lulus mata kuliah Pemrograman Terstruktur. Sebagai teman yang baik, bantulah Puguh dengan membuat program yang bisa menjawab kegalauan Puguh.

Format Masukan
Baris pertama adalah T yang menyatakan jumlah testcase.

Setiap testcasenya akan terdapat N (1<= N <= 1000) yang menyatakan banyaknya modul, dilanjutkan dengan bilangan real P (0 <= P <= 100) sebanyak N (P1, P2, ... PN) yang merepresentasikan nilai praktikum Puguh di setiap modulnya.

Format Keluaran
Untuk setiap case, tampilkan "Case #X: " (tanpa tanda petik) dimana X merupakan urutan testcase dimulai dari 1. Dilanjutkan dengan pesan yang menjawab kegalauan Puguh, apabila nilai Puguh terus menerus meningkat tampilkan pesan "LULUS", jika nilai Puguh terus menerus menurun tampilkan pesan "TIDAK LULUS", jika nilai praktikum Puguh naik turun atau tetap tampilkan pesan "HANYA TUHAN YANG TAHU".

Contoh Masukan
3

3

68.5 79 80

4

92.5 90 85.5 70

4

85 87 82 85

 

Contoh Keluaran
Case #1: LULUS

Case #2: TIDAK LULUS

Case #3: HANYA TUHAN YANG TAHU
*/

#include <stdio.h>

int main()
{
	int i, j, k, m, n, o, temp, naik, turun, tetap;
	
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		turun = 0;
		naik = 0;
		tetap = 0;
		
		scanf("%d", &m);
		for (j = 1; j <= m; j++)
		{
			scanf("%d", &o);
			
			if (j == 1)
			{
				temp = o;
			}
			else if (j > 1)
			{
				if (o > temp)
				{
					naik = 1;
				}
				else if (o < temp)
				{
					turun = 1;
				}
				else if (o == temp)
				{
					tetap = 1;
				}
				temp = o;
			}
		}
		
		if (naik == 1 && turun == 1 || tetap == 1)
		{
			printf("CASE #3: HANYA TUHAN YANG TAHU\n");
		}
		else if (naik == 1 && turun == 0)
		{
			printf("CASE #1: LULUS\n");
		}
		else if (turun == 1 && naik == 0)
		{
			printf("CASE #2: TIDAK LULUS\n");
		}
	}
}
