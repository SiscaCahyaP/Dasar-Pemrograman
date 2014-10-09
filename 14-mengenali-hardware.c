/*
Program untuk mengenali jenis produk, kualitas untuk hardware.

masukan : 1 karakter[A-Z][a-z], spasi, 3 digit angka

karakter = kualitas
 A, a = Super
 B, b = Bagus
 C, c = Normal
 D, d = Kurang Bagus
 E, e = Buruk

3 digit angka:
-digit pertama
 1-3 = Bahan Monitor
 4-6 = Bahan Motherboard
 7-9 = Bahan Mouse

-dua digit selanjutnya
 01-50 = Impor
 51-99 = Lokal
 
jika tidak termasuk dari yang diatas maka mengeluarkan :
Bukan Produk Yang Dibutuhkan !


contoh 1
masukan : A 305
keluaran : Bahan Monitor Impor Kualitas Super

contoh 2
masukan : e 758
keluaran : Bahan Mouse Lokal Kualitas Buruk

contoh 3
masukan : K 900
keluaran : Bukan Produk Yang Dibutuhkan !

*/

#include<stdio.h>

int main()
{
    char m;
    int n, a, b;
    
    scanf("%c %d", &m, &n);
    
    if (m=='A'||m=='a'||m=='B'||m=='b'||m=='C'||m=='c'||m=='D'||m=='d'||m=='E'||m=='e')
    {
        /* menentukan jenis produk */
        a = n / 100;
        switch(a) {
            case 1 : printf("Bahan Monitor "); break;
            case 2 : printf("Bahan Monitor "); break;
            case 3 : printf("Bahan Monitor "); break;
            case 4 : printf("Bahan Motherboard "); break;
            case 5 : printf("Bahan Motherboard "); break;
            case 6 : printf("Bahan Motherboard "); break;
            case 8 : printf("Bahan Mouse "); break;
            case 7 : printf("Bahan Mouse "); break;
            case 9 : printf("Bahan Mouse "); break;
        }
        
        /* menentukan asal produk */
        b = n % 100;
        if (b>50)
        {
            printf("Lokal ");
        } else
        {
            printf("Impor ");
        }
        
        /* menentukan kualitas produkk */
        printf("Kualitas ");
        switch(m) {
            case 'A' : printf("Super\n"); break;
            case 'a' : printf("Super\n"); break;
            case 'B' : printf("Bagus\n"); break;
            case 'b' : printf("Bagus\n"); break;
            case 'C' : printf("Normal\n"); break;
            case 'c' : printf("Normal\n"); break; 
            case 'D' : printf("Kurang Bagus\n"); break;
            case 'd' : printf("Kurang Bagus\n"); break;
            case 'E' : printf("Buruk\n"); break;
            case 'e' : printf("Buruk\n"); break;
        }
        
    } else {
        printf("Bukan Produk Yang Dibutuhkan !\n");
    }
    
    return 0;
}
