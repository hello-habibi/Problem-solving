#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n , m , L;
    cin>>n>>m>>L;
    vector<pair<long long , long long >> arr;
    map<long long , long long > mp;
    for(int i = 0  ; i<n; i++){
        long long x , y ;
        cin>>x>>y;
        arr.push_back({x, y});
        mp[x]  = 1;
    }
    for(int i = 0 ;i<m ; i++){
        long long x , y ;
        cin>>x>>y;
        arr.push_back({x , y });

    }

    priority_queue<long long> pq;
    sort(arr.begin(), arr.end());
    long long power = 1 , count = 0 ;
    bool flag = false;

    for(int i = 0 ; i<(m+n) ; i++){
        if(mp[arr[i].first] == 1 ){
            long long diff = arr[i].second - arr[i].first + 2;
            if(power >= diff){
                //Do nothing 
            }else{
                if(pq.size()>0){
                while (!pq.empty())
                {
                    power += pq.top();
                    pq.pop();
                    count++;

                    if(power >= diff){
                        break;
                    }
                }
                if(power<diff){
                    flag = true;
                    break;
                }
                }else{
                    flag = true;
                    break;
                }
                

            }


        }else{
            pq.push(arr[i].second);
        }

    }

    if(flag){
        cout<<-1<<endl;
    }else{
        if(pq.size()>= 1){
            cout << count<<endl;
        }else{
            cout<<m<<endl;
        }

    }
    
}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }

    return 0;
}