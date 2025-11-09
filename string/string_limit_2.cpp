#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int limit = 5;

    getline(cin, s);

    if (s.length() > limit) {
        s = s.substr(0, limit);   // keep only first 'limit' chars
    }

    cout << "Limited string: " << s << endl;
}
