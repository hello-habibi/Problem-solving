#include <iostream>
using namespace std;

void solution(){
    int arr[26] ;
    for(int i=0 ; i<26; i++){
        arr[i] = 0;
    }
     int n , k;
     cin>>n>>k;
    string word;
    cin>>word;
    for(int i=0; i<n; i++){
        arr[word[i] - 'a']++;
    }
    int sum = 0;
    for(int i=0; i<26; i++){
        if(arr[i] %2 != 0){
            sum++;
        }
    }
    if(sum > (k+1)){
        cout<<"NO" <<sum <<endl;
    }else{
        cout<<"YES"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solution();
    }
    
    return 0 ;
}