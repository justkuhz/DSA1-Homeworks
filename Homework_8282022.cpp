#include <iostream>

using namespace std;

void SelectionSort(int A[], int n);
void InsertionSort(int A[], int n);
void BubbleSort(int A[], int n);

int main() {
	int n = 6;

	int A[6] = { 3, 4, 2, 1, 3, 5 };

	BubbleSort(A, n);

	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
}

void BubbleSort(int A[], int n) {

	int sorted = n;
	int temp = -1;
	int i = 0;

	while (true) {

		bool swap = false;
		while (i + 1 < sorted) {
			
			if (A[i + 1] < A[i]) {

				swap = true;
				temp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = temp;
			}
			i++;
		}

		if (swap == false) break;
		else {

			sorted -= 1;
			i = 0;
		}
	}
}

void InsertionSort(int A[], int n) {
	int temp = -1;

	for (int i = 0; i < n; i++) {
		int j = i;

		while (j != 0) {
			if (A[j] < A[j - 1]) {

				temp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = temp;
				j--;
			}
			else break;
		}
	}
}

void SelectionSort(int A[], int n) {
	int temp = -1; 

	for (int i = 0; i < n - 1; i++) {

		int min = A[i];

		for (int j = i; j < n; j++) {

			if (A[j] < min) min = j;
		}

		temp = A[i];
		A[i] = A[min];
		A[min] = temp;
	}
}