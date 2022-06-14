#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int min,max;
    int i;
    printf("Nhap vao lan luot gia tri min, max: ");
    scanf("%d %d", &min, &max);
    for (i = min; i <= max; i++) {
        if (i%2 == 0) {
        	printf("%d\n", i);
		}
    }
	return 0;
}
