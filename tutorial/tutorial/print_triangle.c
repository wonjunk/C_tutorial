#include <stdio.h>

int print_triangle() {
	int i, j, size_triangle;
	printf("출력할 삼각형의 크기를 입력하시오\n");
	scanf_s("%d", &size_triangle);

	for (i = 1; i <= size_triangle; i++) {
		for (j = 1; j <= i + 1; j++) {
			if (j == i + 1) {
				printf("\n");
			}
			else {
				printf("*");
			}
		}
	}
	return 0;
}