#include <bits/stdc++.h>
#include <string.h>

using namespace std;

void solotion(){

    int n;
    string word;
    cin>>n>>word;
    string ans ="";
        n--;

    while (!word.empty())
    {
        if(word.back() == 'a' || word.back() == 'e'){
            ans.push_back( word.back());word.pop_back();
            ans.push_back( word.back());word.pop_back();
            ans.push_back('.');
        }else{
            ans.push_back( word.back());word.pop_back();
        }

    }
    ans.pop_back();
    reverse(ans.begin() , ans.end());
    
    cout<<ans<<endl;

    

}


int main(){
    int t ;
    cin>>t;
    while(t--){
        solotion();
    }

}
