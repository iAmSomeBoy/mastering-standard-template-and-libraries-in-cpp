#include <bits/stdc++.h>
using namespace std;

struct Student{
    int roll;
    string name;
    double cg;
};

int main(){
    vector<Student> S;

    cout<<"Input number of student: ";
    int N; cin>>N;

    for(int i= 0; i< N; i++){
        cout<<"Input student's roll, name, cgs "<<i+1<<endl;
        Student temp;
        cin>>temp.roll>>temp.name>>temp.cg;
        S.push_back(temp);
    }

    for(auto &st: S){
        cout<<st.roll<<" "<<st.name<<" "<<st.cg<<endl;
    }

    return 0;
}