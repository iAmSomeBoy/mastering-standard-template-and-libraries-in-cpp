#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    /*
    int Array[] = {1, 3, 4, 52, 23, 53, 564, 321};
    for(int i = 0; i< sizeof(Array)/sizeof(Array[0]) ; i++){
        cout<<Array[i]<<" ";
    }
    */

    vector<int> V_int;
    vector<double> V_double;
    vector<string> V_string; 
    vector<char> V_char;
    cout<<V_double.size()<<endl;

    //initallizing
    V_int = {2,14, 231, 44444, 1243, 53, 233};
    V_double ={3.3, 23.2, 32.3, 42.23};
    V_string = {"ashik", "ashiq"};
    V_char = {'a', 'b', 'c'};

    //specific access
    cout<<V_int[1]<<endl;
    cout<<V_double[2]<<endl;
    cout<<V_string[1]<<endl;
    cout<<V_char[2]<<endl;

    //template access

    cout<<V_double.front()<<endl;
    cout<<V_string.back()<<endl;
    cout<<V_char.empty()<<endl;

    



    return 0;
}