#include <stdio.h>
void print_tri();
void print_revtri();
int main() {
	int n;
	printf("출력하고 싶은 모양을 선택하세요\n");
	printf("1. 삼각형\n");
	printf("2. 역삼각형\n");

	scanf_s("%d", &n);
	if (n == 1) {
		/* 원하는 크기의 삼각형 출력*/
		print_tri();
	}
	else if (n == 2) {
		/* 원하는 크기의 역삼각형 출력*/
		print_revtri();
	}
	return 0;
}