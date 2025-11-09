#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s = "dbcae";

    sort(s.begin(), s.end());   // Sorts characters in ascending order

    cout << s << endl;          // Output: abcde
    return 0;
}
