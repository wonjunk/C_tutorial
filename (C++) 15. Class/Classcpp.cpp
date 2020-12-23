/* 
   Class : 특정한 용도를 수행하기 위한 변수와 함수를 모아둔 틀(자료형)
   객체(Object) : Class라는 틀을 사용하여 찍어낸 개체(변수, 메모리 상의 공간)
   Struct와 Class의 차이 : Struct는 default 값이 public, Class는 default 값이 private이다. 
           
*/

#include <iostream>


//private : 함수 밖에서 접근할 수 없는 변수나 함수
//public : 함수 밖에서 접근할 수 있는 변수나 함수
// private과 public을 이용해 처리하는 것을 캡슐화 라고 한다.
// volume의 최대값과 최소값을 넘어가지 않도록 하기 위한 장치로 함수를 생성
// 하지만 이 때 main함수에서 SetVolume 함수가 아닌 volume 변수를 직접적으로 건드린다면
// 최댓값보다 크거나 최솟값보다 더 작은 volume 변수가 생길 수 있다. 
// 이런 상황을 막기 위해 private 변수를 지정한다. 


// Class의 경우 private, public을 지정해주지 않으면 private으로 간주
class classTV {
	bool powerOn;
	int channel;
	int volume;

public:
	void setvolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			std::cout << "볼륨을 " << vol << "로 바꿨습니다." << std::endl;
		}
	}

	void on() {
		powerOn = true;
		std::cout << "TV를 켰습니다." << std::endl;
	}

	void off() {
		powerOn = false;
		std::cout << "TV를 껐습니다." << std::endl;
	}

	void setchannel(int cnl) {
		if (cnl >= 0 && cnl <= 100) {
			channel = cnl;
			std::cout << "채널을 " << cnl << "로 바꿨습니다." << std::endl;
		}
	}
};

// struct의 경우 private과 public을 지정해주지 않을 경우 public으로 간주
struct structTV {
	void setvolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			std::cout << "볼륨을 " << vol << "로 바꿨습니다." << std::endl;
		}
	}

	void on() {
		powerOn = true;
		std::cout << "TV를 켰습니다." << std::endl;
	}

	void off() {
		powerOn = false;
		std::cout << "TV를 껐습니다." << std::endl;
	}

	void setchannel(int cnl) {
		if (cnl >= 0 && cnl <= 100) {
			channel = cnl;
			std::cout << "채널을 " << cnl << "로 바꿨습니다." << std::endl;
		}
	}
private:
	bool powerOn;
	int channel;
	int volume;
};

int main() {
	classTV lg;
	structTV samsung;
	lg.on(); // lg.powerOn에 접근 불가능
	lg.setchannel(10); // lg.channel에 접근 불가능
	lg.setvolume(50); // lg.volume에 접근 불가능
	
	samsung.on(); // samsung.powerOn에 접근 불가능
	samsung.setchannel(23); // samsung.channel에 접근 불가능
	samsung.setvolume(98); // samsung.volume에 접근 불가능
}