#include <iostream>
using namespace std;
int main()
{
    int n, arr[100];
    int index, newValue;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\nEnter index to modify: ";
    cin >> index;
    cout << "Enter new value: ";
    cin >> newValue;
    if (index >= 0 && index < n)
    {
        arr[index] = newValue;
        cout << "Updated array: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
    else
        cout << "Invalid index.";
    return 0;
}