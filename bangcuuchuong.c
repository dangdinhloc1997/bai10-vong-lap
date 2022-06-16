#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i;
	printf("Nhap n bat ki: ");
	scanf("%d", &n);
	
	for ( i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", n, i, n*i );
	}
	return 0;
}


