#include <vector>
#include <algorithm>
#include <iostream>

void remove_erase_example() {
    std::vector<int> vec = {1, 2, 3, 2, 4, 2, 5, 2};
    int value_to_remove = 2;
    
    // Remove all occurrences of 2
    vec.erase(std::remove(vec.begin(), vec.end(), value_to_remove), vec.end());
    
    // vec becomes {1, 3, 4, 5}
    for (int x : vec) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}