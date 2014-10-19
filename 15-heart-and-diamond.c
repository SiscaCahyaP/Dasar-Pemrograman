#include <stdio.h>

void wajik1(int n, int jenis)
{
  int i, j, titik1, titik2;
  
  for (i = 1; i <= n; i++)
  {
    
    if (i == 1)
    {
      titik1 = n;
      titik2 = n;
    } else {
      titik1 = titik1 - 1;
      titik2 = titik2 + 1;
    }
    
    for (j = 1; j <= n+(i-1); j++)
    {
      if (j == titik1 || j == titik2)
      {
        printf("%c", jenis);
      } else 
      {
        printf(" ");
      }
    }
    
    printf("\n");
  }
}

void wajik2(int n, int jenis)
{
  int i, j, titik1, titik2;
  
  for (i = 1; i <= n-1; i++)
  {
    if (i == 1)
    {
      titik1 = 2;
      titik2 = n + n - 2;
    } else {
      titik1 = titik1 + 1;
      titik2 = titik2 - 1;
    }
    
    for (j = 1; j <= n+n-1-i; j++)
    {
      if (j == titik1 || j == titik2)
      {
        printf("%c", jenis);
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}

void cinta1(int n, int jenis)
{
  int i, j, titik1, titik2, titik3, titik4;
  
  for (i = 1; i <= n; i++)
  {
    if (i == 1)
    {
      titik1 = n;
      titik2 = n;
      titik3 = n+n+n;
      titik4 = n+n+n;
    } else {
      titik1 = titik1 - 1;
      titik2 = titik2 + 1;
      titik3 = titik3 - 1;
      titik4 = titik4 + 1;
    }
    
    for (j = 1; j <= n+n+n+(i-1); j++)
    {
      if (j == titik1 || j == titik2 || j == titik3 || j == titik4)
      {
        printf("%c", jenis);
      } else {
        printf(" ");
      }
    }
    
    printf("\n");
  }
}

void cinta2(int n, int jenis)
{
  int i, j, titik1, titik2, titik3;
  
  for (i = 1; i <= n+n; i++)
  {
    if (i == 1)
    {
      titik1 = 1;
      titik2 = n+n+n+n-1;
      titik3 = n+n;
    } else {
      titik1 = titik1 + 1;
      titik2 = titik2 - 1;
      titik3 = 0;
    }
    
    for (j = 1; j <= n+n+n+n-i; j++)
    {
      if (j == titik1 || j == titik2 || j == titik3)
      {
        printf("%c", jenis);
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}


int main(int argc, char **argv)
{
  int n, jenis;
  scanf("%d %d", &jenis, &n);
  if (jenis == 4)
  {
    wajik1(n, jenis);
    wajik2(n, jenis);
  }
  else if (jenis == 3)
  {
    cinta1(n, jenis); 
    cinta2(n, jenis);
  }
  
  return 0;
}
