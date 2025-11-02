#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {

  vector<int> vec = { 10, 20, 30, 40, 30, 60, 70, 30, 100 };
  auto it = remove(vec.begin(), vec.end(), 30);
  
  for (auto i = vec.begin(); i != it; i++)
    cout << *i << " ";
  
  return 0;
}