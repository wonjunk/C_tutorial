#include <stdio.h>
void print_tri() {
	/* ���ϴ� ũ���� �ﰢ�� ���*/

	int i, j, size_triangle;
	printf("����� �ﰢ���� ũ�⸦ �Է��Ͻÿ�\n");
	scanf_s("%d", &size_triangle);

	for (i = 0; i < size_triangle ; i++) {
		for (j = 0; j < 2*size_triangle ; j++) {
			if (j <= size_triangle + i & j >= size_triangle - i) {
				printf("*");
			}
			else if (j == 2 * size_triangle -1) {
				printf("\n");
			}
			else {
				printf(" ");
			}
		}
	}
}