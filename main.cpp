#include <iostream>
#include <random>
using namespace std;

int main() {

	int* size_m = new int;
	int* size_n = new int;	
	cout << "M: ";
	cin >> *size_m;
	cout << "N: ";	
	cin >> *size_n;

	int* A = new int[*size_m] {};
	int* B = new int[*size_n] {};

    for (int i = 0; i < *size_m; i++) {
        A[i] = rand() % 10 + 1;;
        cout << A[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < *size_n; i++) {
        B[i] = rand() % 10 + 1;;;
        cout << B[i] << " ";
    }
    cout << endl;

    int* temp = new int[*size_m + *size_n] {};
    int temp_size = 0;

    for (int i = 0; i < *size_m; i++) {
        bool already_added = false;
        for (int k = 0; k < temp_size; k++) {
            if (temp[k] == A[i]) {
                already_added = true;
                break;
            }
        }
        if (already_added) continue;

        for (int j = 0; j < *size_n; j++) {
            if (A[i] == B[j]) {
                temp[temp_size] = A[i];
                temp_size++;
                break;
            }
        }
    }

    cout << "Common elements: ";
    for (int i = 0; i < temp_size; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;

    delete size_m;
    delete size_n;
    delete[] A;
    delete[] B;
    delete[] temp;


	return 0;   
}