#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<long long> st;
    long long sum = 0;

    int n;
    cin >> n; 
    for (int i = 0; i < n; i++) {
        long long num; 
        cin >> num;
        st.push(num);
    } 

    long long prev = st.top();
    st.pop();
    sum += prev;

    while (!st.empty()) {
        long long curr = st.top();
        st.pop();

        if (curr >= prev) {

            curr = prev - 1;
        }

        if (curr > 0) {
            sum += curr;
            prev = curr;
        } else {
            break;
        }
    }

    cout << sum << endl;
    return 0;
}
