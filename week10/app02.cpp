/**************************************************************
 * strcmp 함수와 strncmp 함수를 사용해서                      *
 * 두 문자열을 비교하는 프로그램                              *
 **************************************************************/
#include <cstring>
#include <iostream>
using namespace std;

int myStrcmp(const char* a, const char* b) {
	int i = 0;
	while (a[i] != NULL && b[i] != NULL) {
		if (a[i] != b[i])
			if (a[i] - b[i] < 0)
				return -1;
			else if (a[i] - b[i] > 0)
				return 1;
		i++;
	}
	if (a[i] < b[i])
		return -1;
	else if (a[i] > b[i])
		return 1;
	else return 0;
}

int main()
{
	const char* s1 = "Hi Daelim";
	const char* s2 = "Hi Daelim";
	cout << strcmp(s1, s2) << endl;
	//cont <<strncmp(s1,s2,2) << endl;
	cout << myStrcmp(s1, s2) << endl;

	return 0;
}