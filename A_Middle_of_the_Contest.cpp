#include <bits/stdc++.h>
using namespace std;

int main() {
    string start, ending;
    int sh, sm, eh, em;
    
    cin >> start >> ending;

    sh = stoi(start.substr(0, 2)); 
    sm = stoi(start.substr(3));    
    eh = stoi(ending.substr(0, 2)); 
    em = stoi(ending.substr(3));   

   
    int start_total_minutes = sh * 60 + sm;
    int end_total_minutes = eh * 60 + em;

    int middle_total_minutes = (start_total_minutes + end_total_minutes) / 2;

    int middle_hour = middle_total_minutes / 60;
    int middle_minute = middle_total_minutes % 60;

    if (middle_hour < 10) cout << '0';
    cout << middle_hour << ":";
    if (middle_minute < 10) cout << '0';  
    cout << middle_minute << endl;

    return 0;
}
