//NAME = Harmanjeet singh
//ROLL NO = 2010991259
//SET = 4
//Q2 = consecutive interger from array
#include <bits/stdc++.h>
using namespace std;

bool checkCons(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1] + 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (checkCons(arr, n) == true)
    {
        cout << "true";
    }
    else
        cout << "false";

    return 0;
}