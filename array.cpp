#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Insert elements
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Display elements
    cout << "Array elements: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
