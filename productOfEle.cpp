#include <iostream>
using namespace std;

int main() {
	int arr[] = {1, 2, 3, 4, 5}; // Example array
	int size = sizeof(arr) / sizeof(arr[0]);
	int product = 1;

	for (int i = 0; i < size; ++i) {
		product *= arr[i];
	}

	cout << "The product of all elements is: " << product << endl;
	return 0;
}
