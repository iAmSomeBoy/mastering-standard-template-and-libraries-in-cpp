#include<bits/stdc++.h>
using namespace std;

int main(){

    //vector<vector<int>> V2D;
    int row, col;
    cout<<"Input row and col size"<<endl;
    cin>> row>> col;

    vector<vector<int>> V2D(row, vector<int>(col,0));


    for(int i= 0; i< row; i++){
        for(int j= 0; j< col; j++){
            cout<<V2D[i][j]<<" ";
        }
        cout<<endl;
    }

    vector<vector<int>> V2DD(row, vector<int>(col));
    for(int k= 0; k< row; k++){
        for(int l= 0; l< col; l++){
            cin>>(V2DD[k][l]);
        }
    }

    for(int k= 0; k< row; k++){
        for(int l= 0; l< col; l++){
            cout<<V2DD[k][l]<<" ";
        }
        cout<<endl;
    }

    return 0;
}