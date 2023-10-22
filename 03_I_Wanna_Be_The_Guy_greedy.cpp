#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 4, x = 3, y = 2, j, ctr = 0;
    vector<int> arr;
    cin >> n;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        cin >> j;
        arr.push_back(j);
    }

    cin >> y;

    for (int i = 0; i < y; i++)
    {
        cin >> j;
        arr.push_back(j);
    }

    for (int i = 1; i <= n; i++)
    {
        for (j = 0; j < x + y; j++)
        {
            if (arr[j] == i)
            {
                ctr++;
                j = x + y; // to break the inner loop after first match
            }
        }
    }
    // cout << ctr << endl;
    for (int i = 0; i < x; i++)
    {
        arr[i];
    }

    if (ctr == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    return 0;
}