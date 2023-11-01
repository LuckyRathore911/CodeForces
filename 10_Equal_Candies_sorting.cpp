#include <iostream>
using namespace std;
int main()
{
    int t, n, i;
    cin >> t;

    int tem;
    for (int k = 0; k < t; k++)
    {
        cin >> n;
        int arr[n];
        int total = 0;

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (i = 0; i < n; i++)
        {
            total += arr[i];
        }

        for (i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    tem = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tem;
                }
            }
            break;
        }

        int min = arr[0];
        int remaining = min * n;

        int eaten = total - remaining;
        cout << eaten << endl;
    }
    return 0;
}