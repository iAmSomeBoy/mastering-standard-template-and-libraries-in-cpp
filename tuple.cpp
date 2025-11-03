#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Input Roll, Name, Department, CGPA\n";

    int roll;
    string name, dept;
    double cg;

    cin >> roll;
    cin.ignore(); // clear newline
    getline(cin, name);
    getline(cin, dept);
    cin >> cg;

    tuple<int, string, string, double> Student(roll, name, dept, cg);

    cout << "\nSingle Student Data:\n";
    cout << get<0>(Student) << "\t" 
         << get<1>(Student) << "\t" 
         << get<2>(Student) << "\t" 
         << get<3>(Student) << endl;

    // -----------------------------------------
    cout << "\nFor more students:\n";
    cout << "Enter number of students: ";
    int N;
    cin >> N;
    cin.ignore(); // clear newline

    vector<tuple<int, string, string, double>> Students;

    for (int i = 0; i < N; i++) {
        int rolls;
        string names, depts;
        double cgs;

        cout << "\nStudent " << i + 1 << " (Roll, Name, Department, CGPA):\n";
        cin >> rolls;
        cin.ignore();  // clear newline before getline
        getline(cin, names);
        getline(cin, depts);
        cin >> cgs;
        cin.ignore();  // clear newline for next iteration

        Students.push_back(make_tuple(rolls, names, depts, cgs));
    }

    cout << "\nAll Student Data:\n";
    for (int i = 0; i < Students.size(); i++) {
        cout << get<0>(Students[i]) << "\t"
             << get<1>(Students[i]) << "\t"
             << get<2>(Students[i]) << "\t"
             << get<3>(Students[i]) << endl;
    }

    return 0;
}
