#include <iostream>
using namespace std;

int main()
{
	int humans = 0;
	//int ages[100];

	int age;
	//int* a = &age; //포인터 변수는 메모리 번지 주소만을 할당받는다
	cout << "몇 명? ";
	cin >> humans;
	int* ages = new int[humans]; //힙 메모리 할당

	//cout << ages << "\n";
	for (int i = 0; i < humans; i++) {
		cout << "나이? ";
		cin >> age;
		*(ages + i) = age;
	}
	for (int i = 0; i < humans; i++) {
		cout << *(ages + i) << "\n";
	}

	delete[] ages;
	return 0;
}