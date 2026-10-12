#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};

    cout << "Array before deletion:\n";

    for (int i = 0; i < 6; i++)
    {
        cout << "Index is " << i
             << " value is " << arr[i] << "\n";
    }

    // Delete the last element
    int n = 6;
    n--;

    cout << "Array after deletion:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Index is " << i
             << " value is " << arr[i] << "\n";
    }

    return 0;
}
