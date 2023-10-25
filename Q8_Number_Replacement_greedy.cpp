#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n, temp, ctr = 0;
        string s;
        char tem;

        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cin >> s;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j] && s.at(i) != s.at(j))
                    ctr++;
            }
        }
        if (ctr > 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
