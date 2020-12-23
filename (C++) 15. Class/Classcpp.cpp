/* 
   Class : Ư���� �뵵�� �����ϱ� ���� ������ �Լ��� ��Ƶ� Ʋ(�ڷ���)
   ��ü(Object) : Class��� Ʋ�� ����Ͽ� �� ��ü(����, �޸� ���� ����)
   Struct�� Class�� ���� : Struct�� default ���� public, Class�� default ���� private�̴�. 
           
*/

#include <iostream>


//private : �Լ� �ۿ��� ������ �� ���� ������ �Լ�
//public : �Լ� �ۿ��� ������ �� �ִ� ������ �Լ�
// private�� public�� �̿��� ó���ϴ� ���� ĸ��ȭ ��� �Ѵ�.
// volume�� �ִ밪�� �ּҰ��� �Ѿ�� �ʵ��� �ϱ� ���� ��ġ�� �Լ��� ����
// ������ �� �� main�Լ����� SetVolume �Լ��� �ƴ� volume ������ ���������� �ǵ帰�ٸ�
// �ִ񰪺��� ũ�ų� �ּڰ����� �� ���� volume ������ ���� �� �ִ�. 
// �̷� ��Ȳ�� ���� ���� private ������ �����Ѵ�. 


// Class�� ��� private, public�� ���������� ������ private���� ����
class classTV {
	bool powerOn;
	int channel;
	int volume;

public:
	void setvolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			std::cout << "������ " << vol << "�� �ٲ���ϴ�." << std::endl;
		}
	}

	void on() {
		powerOn = true;
		std::cout << "TV�� �׽��ϴ�." << std::endl;
	}

	void off() {
		powerOn = false;
		std::cout << "TV�� �����ϴ�." << std::endl;
	}

	void setchannel(int cnl) {
		if (cnl >= 0 && cnl <= 100) {
			channel = cnl;
			std::cout << "ä���� " << cnl << "�� �ٲ���ϴ�." << std::endl;
		}
	}
};

// struct�� ��� private�� public�� ���������� ���� ��� public���� ����
struct structTV {
	void setvolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			std::cout << "������ " << vol << "�� �ٲ���ϴ�." << std::endl;
		}
	}

	void on() {
		powerOn = true;
		std::cout << "TV�� �׽��ϴ�." << std::endl;
	}

	void off() {
		powerOn = false;
		std::cout << "TV�� �����ϴ�." << std::endl;
	}

	void setchannel(int cnl) {
		if (cnl >= 0 && cnl <= 100) {
			channel = cnl;
			std::cout << "ä���� " << cnl << "�� �ٲ���ϴ�." << std::endl;
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
	lg.on(); // lg.powerOn�� ���� �Ұ���
	lg.setchannel(10); // lg.channel�� ���� �Ұ���
	lg.setvolume(50); // lg.volume�� ���� �Ұ���
	
	samsung.on(); // samsung.powerOn�� ���� �Ұ���
	samsung.setchannel(23); // samsung.channel�� ���� �Ұ���
	samsung.setvolume(98); // samsung.volume�� ���� �Ұ���
}