#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    vector<int> v(26);
    
    for (char ch : s) {
        v[ch - 'a']++;
    }

    for (int i : v) {
        if (i % n != 0) {
            cout << -1 << endl;
            return 0;
        }
    }

    string result;
    int repeater = n;
    

    while (repeater--) {
        for (int i = 0; i < 26; i++) {
            int char_num = v[i] / n;  
            while (char_num--) {
                result += ('a' + i);  
            }
        }
    }

    cout << result << endl;
    
    return 0;
}
