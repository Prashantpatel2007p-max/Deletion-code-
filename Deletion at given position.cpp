#include <iostream>
using namespace std;

int main()
{
    int pos;
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int n = 6;

    cout << "Enter position to delete: ";
    cin >> pos;

    if (pos < 1 || pos > n)
    {
        cout << "Invalid position";
        return 0;
    }

    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "Array after deletion:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Index is " << i
             << " value is " << arr[i] << "\n";
    }

    return 0;
}
