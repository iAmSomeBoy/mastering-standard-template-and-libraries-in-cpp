// pair<> is mainly a 2d array
#include <bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Enter data of student"<<endl;
    pair<int, string> Student;
    cin>> Student.first>> Student.second;
    cout<<Student.first<<"\t"<< Student.second <<endl;


    cout<<"For more than one entries\n";
    cout<<"Enter number of students"<<endl;
    int n; cin>>n;
    vector<pair<int, string>> Students(n);
    
    for(int i= 0; i< n; i++){
                                         /*cin>>Students[i].first>>Students[i].second ;
                                         it doen't let to take more than one words.*/
        cin>> Students[i].first;
        //cin.ignore()                    //ignore spaces or newline before next portion
        getline(cin, Students[i].second); //read full name with space
    }

    //more easy the below
    /* vector<pair<int, string>> Students;
    int roll; string name;

    while (cin >> roll >> name) {
    Students.push_back({roll, name});
    } */




    cout<<"Data Table"<<endl;
    for(int i= 0; i< n; i++){
        cout<<Students[i].first<<"\t"<<Students[i].second<<endl;
    }


    return 0;
}