
#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    double sum = 0, average;

    cout << "Enter array size (1-100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid array size!";
        return 0;
    }

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    average = sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
