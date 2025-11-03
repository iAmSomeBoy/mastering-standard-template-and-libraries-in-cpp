#include <bits/stdc++.h>
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
    V_int = {2, 14, 231, 44, 444, 12, 43, 53, 233};
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
    //using ranged for loop
    for(auto x: V_int) cout<< x<<" "; cout<<endl;
    //or
    for(int i= 0; i< V_int.size(); i++ ){
        cout<<V_int[i]<<" ";
    } cout<<endl;

    // input from the keyboard
    cout<<"To make a vector array, Give its entry size\n";
    int n;
    cin>>n;
    vector<int> Vk;
    int y;
    for(int i= 0; i< n; i++){
        cin>>y;
        Vk.push_back(y);
    }
    cout<<"Your array is :\t";
    for(auto z: Vk) cout<<z<<" "; cout<<endl;

    //sort
    sort(Vk.begin(), Vk.end()); cout<<"sort(Vk.begin(), Vk.end())"<<endl;
    for(auto z: Vk) cout<<z<<" "; cout<<endl;
    sort(Vk.rbegin(), Vk.rend());cout<<"sort(Vk.rbegin(), Vk.rend())"<<endl;
    for(auto z: Vk) cout<<z<<" "; cout<<endl;
    reverse(Vk.begin(), Vk.end());cout<<"reverse(Vk.begin(), Vk.end())"<<endl;
    for(auto z: Vk) cout<<z<<" "; cout<<endl;
    //sort(Vk.rbegin(), Vk.rend()) and  reverse(Vk.begin(), Vk.end()); is same

    //modify
    Vk.pop_back();
    cout<<"After pop_back() our array is :\t";
    for(auto z: Vk) cout<<z<<" "; cout<<endl;   
    
    Vk.erase(Vk.begin());
    cout<<"After erase(Vk.begin(), Vk.end()) our array is :\t";
    for(auto z: Vk) cout<<z<<" "; cout<<endl; 
    cout<<"After erasong a specific value 5"<<endl;
    int NN = 5;
    
    Vk.erase(remove(Vk.begin(), Vk.end(), NN), Vk.end());
    for(auto z: Vk) cout<<z<<" "; cout<<endl;



    return 0;
}