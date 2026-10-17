
#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], sum[100], n;

    cout << "Enter array size (1-100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid array size!";
        return 0;
    }

    cout << "Enter first array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter second array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
        sum[i] = a[i] + b[i];

    cout << "Sum of two arrays:\n";
    for (int i = 0; i < n; i++)
        cout << sum[i] << " ";

    return 0;
}
