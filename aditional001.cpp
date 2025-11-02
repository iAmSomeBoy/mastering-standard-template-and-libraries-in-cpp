#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    std::vector<int> vec = {1, 2, 3, 2, 4, 2, 5};
    
    std::cout << "Original: ";
    for (int x : vec) std::cout << x << " ";
    std::cout << std::endl;
    
    // Step 1: Use remove() to rearrange
    auto new_end = std::remove(vec.begin(), vec.end(), 2);
    
    std::cout << "After remove(): ";
    for (int x : vec) std::cout << x << " ";
    std::cout << std::endl;
    
    // Step 2: Use erase() to actually delete the garbage
    vec.erase(new_end, vec.end());
    
    std::cout << "After erase(): ";
    for (int x : vec) std::cout << x << " ";
    std::cout << std::endl;
    std::cout << "Final size: " << vec.size() << std::endl;


    return 0;
}