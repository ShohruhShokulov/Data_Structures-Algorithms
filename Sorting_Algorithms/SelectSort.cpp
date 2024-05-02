#include <iostream>
using namespace std;

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectSort(int array[], int size) {
	for (int i = 0; i < size-1; i++) {
		int min_index = i;
		for (int j = i+1; j<size;j++){
			if (array[j] < array[min_index])
				min_index = j;
		}
		
		swap(&array[i], &array[min_index]);
	}
}

void print(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << ", ";
	}
	cout << endl;
}

int main() {
	int array[] = { 33,1,0,98,-21,33,8,19 };
	int size = sizeof(array) / sizeof(array[0]);
	cout << "Unsorted Array: ";
	print(array, size);
	
	selectSort(array, size);
	cout << "Sorted Array: ";
	print(array, size);
	
	return 0;
}
