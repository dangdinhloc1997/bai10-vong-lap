#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age, i, j;
	char name[6];
	printf("Nhap tuoi cua ban: ");
	scanf("%d", &age);
	printf("Nhap ten cua ban: ");
	scanf("%s", &name);
	for(i = 1; i <=age; i++) {
		for (j =0 ; j <= 6; j++) {
			printf("%c", name[j]);
		}
			printf("\n");
	}
	return 0;
}
