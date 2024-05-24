#include <iostream>
using namespace std;

int partition(int a[], int l, int h) {
	int p = a[l];
	int i = l;
	int j = h;
	while (i < j) {
		do {
			i++;
		} while (a[i] <= p);
		
		do {
			j--;
		} while (a[j] > p);

		if (i < j) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	int temp1 = a[l];
	a[l] = a[j];
	a[j] = temp1;
	return j;
}

void quick_sort(int a[], int l, int h) {
	if (l < h) {
		int pi = partition(a, l, h);
		quick_sort(a, l, pi);
		quick_sort(a, pi + 1, h);
	}
}

int main() {
	int a[] = { 45,9,10,75, 80, 21 };
	int n = sizeof(a) / sizeof(a[0]);
	quick_sort(a, 0, n);
	for (int i = 0; i < n; i++) {
		cout << a[i]<<" ";
	}
	return 0;
}