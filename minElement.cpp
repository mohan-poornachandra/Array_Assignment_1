#include <iostream>
#include <climits>

using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minElement = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    cout << "Minimum element: " << minElement << endl;

    return 0;
}