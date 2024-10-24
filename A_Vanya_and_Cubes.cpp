#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n==1){
        cout<<1<<endl;
        return 0;
    }

    int total_sum = 1;
    int iterator = 1;
    int next_position ;

    while (total_sum <= n)
    {
        iterator++;
        int next = (iterator *(iterator +1))/2;
        total_sum += next;

    }

    cout << iterator-1 << endl;

    return 0;
}