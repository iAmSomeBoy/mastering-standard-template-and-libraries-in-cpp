
// pair<> is mainly a 2d array
#include <bits/stdc++.h>
using namespace std;

int main(){

    pair<int, string> Student;
    cin>> Student.firt>> 
    cout<<"Enter number of students"<<endl;
    int n; cin>>n;
    for(int i= 0; i< n; i++){
        cin>>Student[i].first>>Student[i].second ;
    }

    for(int i= 0; i< n; i++){
        cout<<Student[i].first<<"\t"<<Student[i].second<<endl;
    }



    return 0;
}