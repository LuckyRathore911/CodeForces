#include <iostream>
using namespace std;
int main()
{
    int n, leftElement, ctr = 1, sereja = 0, dima = 0;
    cin >> n;
    int arr[n];
    for (leftElement = 0; leftElement < n; leftElement++)
    {
        cin >> arr[leftElement];
    }
    for (leftElement = 0; leftElement < n;)
    {
        if (ctr % 2 != 0)
        {
            if (arr[leftElement] >= arr[n - 1])
            {
                sereja += arr[leftElement];
                leftElement++;
            }
            else
            {
                sereja += arr[n - 1];
                n--;
            }
        }
        else
        {
            if (arr[leftElement] >= arr[n - 1])
            {
                dima += arr[leftElement];
                leftElement++;
            }
            else
            {
                dima += arr[n - 1];
                n--;
            }
        }
        ctr++;
    }
    // cout << ctr << endl;
    // cout << leftElement<< endl;
    // cout << n << endl;

    cout << sereja << " " << dima;
    return 0;
}