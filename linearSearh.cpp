
#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter array size: ";
    cin >> n;

    int arr[100];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter key to search: ";
    cin >> key;

    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << key << " found at index " << i;
            found = 1;
            break;
        }
    }

    if (found == 0) {
        cout << "Not found";
    }

    return 0;
}
