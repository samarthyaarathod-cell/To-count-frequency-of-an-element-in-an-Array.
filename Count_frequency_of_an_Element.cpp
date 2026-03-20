#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    unordered_map<int, int> freq;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int element;
    cout << "Enter element to find frequency: ";
    cin >> element;

    cout << "Frequency of " << element << " = " << freq[element];

    return 0;
}