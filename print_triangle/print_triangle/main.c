#include <stdio.h>
void print_tri();
void print_revtri();
int main() {
	int n;
	printf("����ϰ� ���� ����� �����ϼ���\n");
	printf("1. �ﰢ��\n");
	printf("2. ���ﰢ��\n");

	scanf_s("%d", &n);
	if (n == 1) {
		/* ���ϴ� ũ���� �ﰢ�� ���*/
		print_tri();
	}
	else if (n == 2) {
		/* ���ϴ� ũ���� ���ﰢ�� ���*/
		print_revtri();
	}
	return 0;
}