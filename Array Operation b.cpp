#include <iostream>
using namespace std;
int main()
{
    int m, n, arr[100][100];
    int row, column, newValue;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    cout << "Enter array elements:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    cout << "\nArray:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    cout << "\nEnter row to modify: ";
    cin >> row;
    cout << "Enter column to modify: ";
    cin >> column;
    cout << "Enter new value: ";
    cin >> newValue;
    if (row >= 0 && row < m && column >= 0 && column < n)
    {
        arr[row][column] = newValue;
        cout << "\nUpdated array:\n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }
    else
        cout << "Invalid row or column.";
    return 0;
}