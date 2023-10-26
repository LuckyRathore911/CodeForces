#include <iostream>

using namespace std;
int main()
{
    int t, x, y, z, medium;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> z;
        if (x > y)
        {
            if (x > z)
            {
                if (y > z)
                    medium = y;
                else
                    medium = z;
            }
            else
                medium = x;
        }
        else
        {
            if (y > z)
            {
                if (x > z)
                    medium = x;
                else
                    medium = z;
            }
            else
                medium = y;
        }
        cout << medium << endl;
    }
    return 0;
}