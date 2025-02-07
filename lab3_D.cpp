#include <iostream>

int main() {
    int x, i;
    std::cout << "Enter your number and number of the bit u want to shift: " << std::endl;
    std::cin >> x >> i;

    if (x <= 0 || x >= 1000000000) {
        std::cout << "Error" << std::endl;
    }
    if (i < 0 || i >= 32) {
        std::cout << "Error" << std::endl;
    }
    
    // shifting i bit with 0
    //x = x & ( ~ (1 << i));

    // shifting i bit with 1
     x = x | (1 << i);
    
    std::cout << "Number X after shifting " << i << "-bit with 1: " << x << std::endl;

    return 0;
}
