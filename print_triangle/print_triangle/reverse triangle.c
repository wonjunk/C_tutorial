#include <stdio.h>
void print_revtri() {
	int i, j, size;
	
	printf("����ϰ� ���� ũ�⸦ �Է��ϼ���\n");
	scanf_s("%d", &size);
	for (i = 0; i < size; i++) {
		for (j = 2*size ; j > 0; j--) {
			if (j == 1) {
				printf("\n");
			}
			else if ( j > i + 1 && j <= 2*size -i) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
	}
}