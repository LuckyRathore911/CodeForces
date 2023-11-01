#include <iostream>

using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    int i, j, temp;

    for (int m = 0; m < testCases; m++)
    {
        int n, k, sum = 0;
        cin >> n >> k;
        int a[n], b[n];

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        // sorting 'a' in ascending order and 'b' in descending order
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
                if (b[i] < b[j])
                {
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        // replacing least value of 'a' with biggest value of 'b'
        for (i = 0; i < k; i++)
        {
            if (a[i] == b[i])
                break;
            if (a[i] < b[i])
                a[i] = b[i];
        }

        for (i = 0; i < n; i++)
            sum += a[i];

        cout << sum << endl;
    }

    return 0;
}