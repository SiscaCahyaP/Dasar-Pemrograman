#include <stdio.h>

int main ()
{
  long long hasil, bil1, bil2;
  char oper;

  hasil = 0;

scanf("%lld %c %lld", &bil1, &oper, &bil2);
    
  if (bil1 >= 0 && bil2 <= 50000)
  {
    if (bil1 == bil2){
      printf("Bilangan pertama sama dengan bilangan kedua.\n");
    }

  switch(oper)
  {
    case '+':
      hasil = bil1 + bil2;
      printf("Ini adalah operasi penjumlahan.\n");
      printf("Hasilnya adalah %lld\n", hasil);
      break;
    case '-':
      hasil = bil1 - bil2;
      printf("Ini adalah operasi pengurangan.\n");
      printf("Hasilnya adalah %lld\n", hasil);
      break;
    case '*':
      hasil = bil1 * bil2;
      printf("Ini adalah operasi pengalian.\n");
      printf("Hasilnya adalah %lld\n", hasil);
      break;
    default:
      printf("Ini adalah operasi pembagian.\n");
                
      if(bil2 == 0)
      {
        printf("Error!!! Divide By Zero!!!\n");
        } else {
          if (bil1 % bil2 == 0)
          {
            hasil = bil1 / bil2;
            printf("Hasilnya adalah %lld\n", bil1 / bil2);
          } else {
            printf("Hasilnya adalah %.2f\n", (float) bil1 / bil2);
          }
        }
      break;
  }  
     
  if (hasil != 0)
  { 
    if (hasil % 2 == 0)
    {
      printf("%lld adalah bilangan genap.\n", hasil);
    } else {
      printf("%lld adalah bilangan ganjil.\n", hasil);
    }
        
    if (hasil % bil1 == 0 && hasil % bil2 == 0)
    {
      printf("%lld adalah kelipatan dari bilangan pertama dan bilangan kedua.\n", hasil);
    } else if (hasil % bil1 == 0)
    {
      printf("%lld adalah kelipatan dari bilangan pertama.\n", hasil);
    } else if (hasil % bil2 == 0)
    {
      printf("%lld adalah kelipatan dari bilangan kedua.\n", hasil);
    }
  }
}
    
    return 0;
}

