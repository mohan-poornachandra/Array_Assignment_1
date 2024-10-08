#include <iostream>
#include <climits>

using namespace std;

int main() {
    int arr[] = {5, 10, 2, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }
    
    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element in the array." << endl;
    } else {
        cout << "The second largest element in the array is: " << secondLargest << endl;
    }

    return 0;
}