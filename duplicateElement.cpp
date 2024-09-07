#include <iostream>

int main() {
    using namespace std;

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                // If any two elements are equal, it's a duplicate
                if (arr[i] == arr[j]) {
                    cout << "Array contains duplicates" << endl;
                    return 0;
                }
            }
        }
        cout << "Array does not contain duplicates" << endl;
        return 0;
    }
