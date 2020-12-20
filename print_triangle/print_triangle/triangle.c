#include <stdio.h>
void print_tri() {
	/* 원하는 크기의 삼각형 출력*/

	int i, j, size_triangle;
	printf("출력할 삼각형의 크기를 입력하시오\n");
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