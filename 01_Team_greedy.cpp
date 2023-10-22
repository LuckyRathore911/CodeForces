#include <iostream>
using namespace std;
int main()
{
    int n, p, v, t, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> p >> v >> t;
        if (p == 1)
        {
            if (v == 1 || t == 1)
                sum += 1;
        }
        else if (v == 1 && t == 1)
            sum += 1;
    }
    cout << sum;

    return 0;
}
