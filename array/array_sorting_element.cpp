#include <algorithm>
#include <array>
#include <iostream>

int main() {
    std::array<int, 6> arr = {5, 2, 8, 1, 9, 3};
    
    std::sort(arr.begin(), arr.end());
    
    for (auto element : arr) {
        std::cout << element << " ";
    }
    
    return 0;
}