#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);  // Declare vector with size n
    for (int i = 0; i < n; i++) {
        cin >> v[i];  // Read elements into vector
    }

    sort(v.begin(), v.end());  // Sort the vector in ascending order

    int count = 0;  // To count how many elements are selected
    vector<int> result;  // To store the selected elements

    for (int i = 0; i < n; i++) {
        if (v[i] <= k) {
            result.push_back(v[i]);
            k -= v[i];  // Decrease k by the value of the selected element
            count++;
        } else {
            break;  // Break the loop if v[i] exceeds the remaining k
        }
    }

    cout << count << endl;  // Output the number of elements
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";  // Output the selected elements
    }
    cout << endl;

    return 0;
}
