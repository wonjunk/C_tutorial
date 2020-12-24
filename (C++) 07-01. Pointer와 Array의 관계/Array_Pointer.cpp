// 배열 포인터 : 배열을 가르키는 포인터
// 포인터 값이 메모리를 차지하는 크기는 포인터가 가르키는 변수형의 크기와 같다. 
// int형의 경우 포인터에 1을 더하면 4바이트씩 움직인다. 따라서 포인터를 이용해 배열 전체를 가리킬 수 있다.

#include <iostream>

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++) {
		std::cout << "배열 arr " << i << "번째 항의 주소 : " << &arr[i] << std::endl;
	}
	std::cout << std::endl;
	std::cout << "arr의 값 : " << arr << std::endl;
	// arr의 값은 배열 arr의 첫번째 항의 주소와 같다.  즉, arr = &arr[0]
	// 이때 arr + i = &arr[i] 이다.

	// 따라서 배열을 출력하는 함수를 이런식으로 표현할 수도 있다.
	std::cout << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << "arr[" << i << "]의 값 : " << *(arr + i) << std::endl;
	}

}