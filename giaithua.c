#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,i;
	int result = 1;
	printf("Nhap vao 1 so bat ki (n>=0): ");
	scanf("%d", &num);
	if (num == 1 || num == 0) {
		result = 1;
	} else {
		for (i = num; i >=1; i--) {
			result = result*i;
		}
	}

	printf("Giai thua cua %d la %d", num, result);
	return 0;
}
