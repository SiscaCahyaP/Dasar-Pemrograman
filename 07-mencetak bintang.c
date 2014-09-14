/* PROGRAM MencetakBintang */

/* Mencetak bintang dari baris satu sampai baris ke n.
 * Setiap baris ke n terdapat n bintang */

#include <stdio.h>

int main () {
  int n;
  int i;
  int j;
  
  printf("Berapa baris : ");
  scanf("%d", &n);
  
  printf("\n=============\n\n");
  
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("*");
    }
    
    printf("\n");
  }
  
  return 0;
}
