// Binary search 
#include <iostream>
using namespace std;

int binary_search(int array[], int size, int target) {
	int lowest = 0;
	int highest = size - 1;
	while (lowest <= highest) {
		int m = (lowest + highest) / 2;
		if (target == array[m]) return m;
		if (target > array[m]) lowest = m + 1;
		else highest = m + 1;
	}
	return -1;
}

int main() {
	int array[] = { 1,3,4,6,7,8,10,12,23,45,56,78,99 };
	int size = sizeof(array) / sizeof(array[0]);
	int a = binary_search(array, size, 100);
	cout << a;
	return 0;
}