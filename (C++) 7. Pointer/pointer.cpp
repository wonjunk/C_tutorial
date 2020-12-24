//포인터 : 변수의 주소를 저장하는 변수 ==> 변수기 때문에 메모리에 저장이 된다.


#include <iostream>

int main() {

	// 포인터 기초

	int a(20);

	int *ptr_a; // 앞에 별표를 표시함으로써 포인터임을 선언


	ptr_a = &a; // &a : a의 주소값

	std::cout << "a의 값 : " << a << std::endl; 
	std::cout << "a의 주소값 : " << &a << std::endl;
	std::cout << "포인터 ptr_a의 값 : " <<ptr_a << std::endl; // 실행시킬 때마다 a의 위치가 바뀌기 때문에 변할 수 있다.
	std::cout << "포인터 ptr_a가 가르키는 값 : " << *ptr_a << std::endl;
	// * : 포인터가 가르키는 변수의 값
	// & : 변수의 주소값


	//포인터를 가르키는 포인터 **

	int **ptr_ptr;

	ptr_ptr = &ptr_a;


	std::cout << "포인터의 포인터의 값 : " << ptr_ptr << std::endl;
	std::cout << "포인터의 포인터가 가르키는 값 : " << *ptr_ptr << std::endl;


	int b(20);
	int *ptr_b = &b; //이와 같이 포인터를 선언해주고 포인터의 값에 b의 주소를 넣어주는 식으로 초기화가 가능하다.
}