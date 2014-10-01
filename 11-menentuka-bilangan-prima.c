/* Menentukan bilangan prima dari 1 sampai n. Masukan berupa
 * batas maksimal. Keluaran berupa deret bilangan prima */

#include <stdio.h>

int main(int argc, char **argv)
{
	int n, i, temu, j;
	
	scanf("%d", &n);
	
	for(i = 2;i <= n; i++)
	{
		temu = 0;
		
		for(j = 2; j < i; j++)
		{
			if(i % j == 0)
			{
				temu = 1;
				break;
			}
		}
		
		if(temu == 0)
		{
			printf("%d ", i);
		}
		
	}
	
	return 0;
}
