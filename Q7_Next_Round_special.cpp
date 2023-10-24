#include <iostream>

using namespace std;
int main()
{
    int n, k, participants = 0;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pass = arr[k - 1];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= pass && arr[i]!=0)
            participants++;
    }
    cout << participants;
    return 0;
}