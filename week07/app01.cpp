#include <iostream>
using namespace std;

int main() {
	int rowColumns[3][5];

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 5; j++)
			rowColumns[i][j] = i * j;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cout << rowColumns[i][j] << "";
		}
		cout << "\n";

	}
	cout << "\n";

	return 0;
}