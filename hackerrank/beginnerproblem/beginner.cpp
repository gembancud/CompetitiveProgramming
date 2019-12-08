#include <iostream>
using namespace std;
int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
}

int main()
{
    int arr[100], x, t, s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        for (int j = 0; j < s; j++)
        {
            cin >> arr[j];
        }
        cin >> x;
        cout << search(arr, s, x) << endl;
    }

    return 0;
}