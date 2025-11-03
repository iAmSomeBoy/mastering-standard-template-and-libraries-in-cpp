#include<bits/stdc++.h>
using namespace std;

int main(){

    //vector<vector<int>> V2D;
    int row, col;
    cout<<"Input row and col size"<<endl;
    cin>> row>> col;

    vector<vector<int>> V2D(row, vector<int>(col, 0));

    for(int i= 0; i< row; i++){
        for(int j= 0; j< col; j++){
            cout<<V2D[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}