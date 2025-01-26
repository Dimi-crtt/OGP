#include <iostream>

void NumberComparison() {
    unsigned short A, B, C;
    std::cout << "Enter numbers: ";
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    if (((A + B) % C) == 0 && (C % B) == 0) 
        std::cout << ((A + B) / C) - (C / B) << std::endl;
    else if (((A + B) % C) == 0 && (C % B) != 0)
        std::cout << ((A + B) / C) + (B * C) << std::endl;
    else
        std::cout << (A - B + C) << std::endl;
}

int ItemNaming() {
    int n;
    std::cout << "Enter product code: ";
    std::cin >> n;

    switch (n) {
    case 69:
        std::cout << "Tea bags" << std::endl;
        break;
    case 987:
        std::cout << "Milk" << std::endl;
        break;
    case 1213:
        std::cout << "Tent" << std::endl;
        break;
    case 1984:
        std::cout << "Pillow" << std::endl;
        break;
    case 420:
        std::cout << "Stick" << std::endl;
        break;
    default: std::cout << "There is no product with this code" << std::endl;
    }

    return 0;
}

int NumberSign() {
    short x;
    std::cout << "Enter x" << std::endl;
    std::cin >> x;
    std::cout << (x == -1 ? "Negative number" : "Positive number");

    return 0;
}

int main() {
    NumberComparison();
    ItemNaming();
    NumberSign();

    return 0;
}

