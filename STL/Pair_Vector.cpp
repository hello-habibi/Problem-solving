#include <iostream>
#include <vector>
using namespace std;
int main(){
    cout<<"good to go ";
    pair<int , string > p;
    p = { 12 , "habibi"} ;
    cout<<p.first << " "<< p.second << endl;

    vector <int> v;
    v.push_back(5);
    v.push_back(34);
    cout<<v[0]<<" " << v.size() << endl;
        
    vector <pair<int , int> > vectorPair;
    vectorPair.push_back({1 , 2});
    vectorPair.push_back({23 , 33});
    vectorPair.push_back({44 , 54});
    for (int i = 0; i < vectorPair.size(); i++)
    {
        
        cout<<vectorPair[i].first << " "<< vectorPair[i].second << endl;
    }
    

    return 0;
}