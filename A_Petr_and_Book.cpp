#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[7];
    cin >> n;
    int totalSum = 0;

    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
        totalSum += arr[i];
    }

    if (n > totalSum)
    {

        n = n % totalSum;
    }
    if(n==0){
        n= totalSum;
    }

    int sum = 0, i = 0;
    while (true)
    {
        sum += arr[i];
        if (sum >= n)
        {
            cout << i + 1 << endl;
            break;
        }
        i++;
        i = i % 7;
    }

    return 0;
}
