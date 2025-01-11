#include <iostream>
#include <random>
using namespace std;

int main() {
	int* size_m = new int;
	cout << "M: ";
	cin >> *size_m;

	int* A = new int[*size_m] {};

	cout << "Enter elements for array A: ";
	for (int i = 0; i < *size_m; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < *size_m; i++) {
		cout << A[i] << " ";
	}

	cout << endl << "|| odd numbers - 1  ||";
	cout << endl << "|| even numbers - 2 ||";
	cout << endl << "|| Your choice: ";
	int* choice = new int;
	cin >> *choice;

	if (*choice == 1) {
		for (int i = 0; i < *size_m; i++) {
			if (A[i] % 2 != 0) {
				for (int j = i; j < *size_m - 1; j++) {
					A[j] = A[j + 1];
				}
				*size_m -= 1;
				i--;
			}
		}
	}
	else if (*choice == 2) {
		for (int i = 0; i < *size_m; i++) {
			if (A[i] % 2 == 0) {
				for (int j = i; j < *size_m - 1; j++) {
					A[j] = A[j + 1];
				}
				*size_m -= 1;
				i--;
			}
		}
	}
	else {
		cout << "Invalid choice!";
	}


	delete size_m;
	delete[] A;

	return 0;
}