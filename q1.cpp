//NAME = Harmanjeet singh
//ROLL NO = 2010991259
//SET = 4
//Q1 = mini. index of repeating element
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int min = -1;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    set<int> s;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s.find(arr[i]) != s.end())
        {
            min = i;
        }
        else
        {
            s.insert(arr[i]);
        }
    }
    if (min != -1)
        cout << min;
    else
        cout << "Invalid Input";

    return 0;
}