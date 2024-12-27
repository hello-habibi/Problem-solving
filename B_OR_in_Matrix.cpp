
#include<bits/stdc++.h>
using namespace std; 

const int N= 101;
    int m , n ; 

    int mat[N][N];
    int visitedMat[N][N];

bool check(int row, int col){
    for(int i = 0 ; i<n; i++){
        if(mat[row][i] == 0 ){
            return false; 
        }
    }
    for(int i = 0  ; i<m ; i++){
        if(mat[i][col] == 0 ){
            return false;
        }
    }
    return true;

}

int main(){


    cin>>m>>n;

    for(int i = 0 ; i<m; i++){
        for(int j = 0 ; j<n ; j++){
            cin>>mat[i][j];
        }
    }

// Making the matrix according to the new instruction 
    for(int i = 0 ; i<m ;i++){
        for(int j = 0 ; j<n ; j++){
            if(check(i , j )){
                for(int k = 0 ; k<n ; k++){
                    if(visitedMat[i] [k] == 0 ){
                        visitedMat[i][k] = 1;
                    }
                }
                for(int k = 0 ; k<m ; k++){
                    if(visitedMat[k][j] == 0 ){
                        visitedMat[k][j] = 1;
                    }
                }
                visitedMat[i][j] = 2;
            }
        }
    }

    // print NO to the screen  
    for(int i = 0 ; i<m ; i++){
        for(int j = 0; j<n ; j++){
            if(mat[i][j] == 1 and visitedMat[i][j] == 0){
                cout<<"NO"<<endl;
                return 0 ; 
            }
        }
    }

    cout<<"YES"<<endl;
    for(int i = 0 ; i<m ; i++){
        for(int j = 0  ; j<n ; j++){
            if(visitedMat[i][j] == 1){
                cout<<0<<" ";
            }else{
                cout<<mat[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}