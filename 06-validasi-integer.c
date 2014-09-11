/* PROGRAM ValidasiMasukanInt */

/* Validasi masukan, yaitu integer */


#include <stdio.h>

int main(int argc, char **argv)
{
	int num;
	char term;
	
	printf("Insert an integer :");
	
	if(scanf("%d%c", &num, &term) != 2 || term != '\n')
		printf("failure\n");
	else
		printf("valid integer followed by enter key\n");
		
	return 0;
}
