// linear search 
# include <iostream>
using namespace std;

int linear_search(int array[],int size, int element) {
	for (int i = 0; i < size; i++) {
		if (element == array[i])
			return i;

	}
	return -1;
}

int main() {
	int array[] = {1,3,4,6,7,8,10,12,23,45,56,78,99};
	int size = sizeof(array) / sizeof(array[0]);
	int a = linear_search(array,size, 99);
	cout << a;
	return 0;
}

