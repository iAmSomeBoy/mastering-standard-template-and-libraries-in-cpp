//tupe is fore more than 2 type of data types at a time
//tuple<int, int, int, int, .........>
#include <bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Input Roll, Name, Department, CGPA\n";    
    int roll;
    string name, dept;
    double cg;

    cin>>roll;
    cin.ignore();
    getline(cin, name);
    cin.ignore();
    getline(cin, dept);
    cin>>cg;

    tuple<int, string, string, double> Student(roll, name, dept, cg);
    //student = make_tuple(roll, name, dept, cg);

    cout<<"Student Data\n";
    cout<<get<0>(Student)<<"\t"<<get<1>(Student) <<"\t"<<get<2>(Student)<<"\t"<<get<3>(Student)<<endl;





    return 0;
}