/*
����
N���� ������ �־�����. �̶�, �ּڰ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

<�Է�>
ù° �ٿ� ������ ���� N (1 �� N �� 1,000,000)�� �־�����. 
��° �ٿ��� N���� ������ �������� �����ؼ� �־�����. 
��� ������ -1,000,000���� ũ�ų� ����, 1,000,000���� �۰ų� ���� �����̴�.

<���>
ù° �ٿ� �־��� ���� N���� �ּڰ��� �ִ��� �������� ������ ����Ѵ�.

*/

#include <iostream>

struct value {
	int max;
	int min;
	
};

struct value max_and_min(int *arr) {
	struct value value;
	int min(*arr), max(*arr);
	while (arr) {
		if (*arr > max) {
			max = *arr;
		}
		if (*arr < min) {
			min = *arr;
		}
	}
	value.max = max;
	value.min = min;
	return value;
}

int main() {
	int N;
	std::cin >> N;

	int  *arr;
	if (N >= 1 && N <= 1000000) {
		arr = (int *)malloc(sizeof(int) *N);
		while (arr) {
			std::cin >> *arr;
			if (*arr >= -1000000 && *arr <= 1000000) {
				arr++;
			}
		}
	
	}
	//struct value result = max_and_min(*������);

	//std::cout << result.max << " " << result.min << std::endl;
	



}
// ��ó : baekjoon