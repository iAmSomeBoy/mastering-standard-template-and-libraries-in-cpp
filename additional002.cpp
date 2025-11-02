#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
    
    // Single element erase
    vec.erase(vec.begin() + 2); // Remove element at index 2 (value 3)
    // vec becomes {1, 2, 4, 5, 6, 7, 8}
    
    // Range erase
    vec.erase(vec.begin() + 1, vec.begin() + 3); // Remove elements 1-2
    // vec becomes {1, 5, 6, 7, 8}
    
    // remove-erase idiom
    vec.erase(std::remove(vec.begin(), vec.end(), 6), vec.end());
    // vec becomes {1, 5, 7, 8}

    return 0;
}