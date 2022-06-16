#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Nhap n bat ki: ");
	scanf("%d", &n);

	int i;
	for (i=1; i<=n; i++) {
		int k, array[k];
		for (k = 0; k <i; k++) {
			array[k] = k +1;
		}
		
		
		int j;
		for ( j = 0; j<i; j++) {
			printf("%d", array[j]);
		}
		printf("\n");
	}
	return 0;
}


