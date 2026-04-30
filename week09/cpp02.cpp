#include <iostream>
#include <cstring>  // string.h
using namespace std;

int main() {
	char lines[80];
	cout << "Input : ";
	cin.getline(lines, 80);
	cout << endl;
	cout << "Output: " << endl;
	cout << lines << endl; // abc (스페이스바, 엔터키, 엔터키, 탭키는 모두 구분자)

	return 0;
}