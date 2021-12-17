#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");

	int N;
	cout << "¬ведите размер массива: ";
	cin >> N;
	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	int min = arr[0];
	int max = arr[0];

	for (int i = 0; i < N; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	cout << endl;
	cout << "min = " << min << endl;
	cout << "max = " << max << endl;
	cout << "sum = " << min + max << endl << endl;

	for (int i = 0; i < N; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}

	return 0;
}
