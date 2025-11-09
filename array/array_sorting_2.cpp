#include <algorithm>
#include <iostream>

int main() {
    int arr[] = {5, 2, 8, 1, 9, 3};
    
    // More readable syntax
    std::sort(std::begin(arr), std::end(arr));
    
    for (auto element : arr) {
        std::cout << element << " ";
    }
    
    return 0;
}