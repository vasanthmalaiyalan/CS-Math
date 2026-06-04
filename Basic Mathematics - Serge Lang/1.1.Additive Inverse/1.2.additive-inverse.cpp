#include <iostream>

int main() {
    int a = 5;
    int b = 3;

    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';

    std::cout << "\n=== Additive Inverse ===\n";

    std::cout << "a     = " << a << '\n';
    std::cout << "-a    = " << -a << '\n';
    std::cout << "a+(-a)= " << a + (-a) << '\n';

    std::cout << "\n=== Double Minus (Additive inverse) ===\n";

    std::cout << "-(-a) = " << -(-a) << '\n';

    std::cout << "\n=== Subtraction ===\n";

    std::cout << "a-b    = " << a - b << '\n';
    std::cout << "a+(-b) = " << a + (-b) << '\n';

    std::cout << "\n=== Commutativity ===\n";

    std::cout << "a+b = " << a + b << '\n';
    std::cout << "b+a = " << b + a << '\n';

    std::cout << "\n=== Associativity ===\n";

    int c = 9;

    std::cout << "(a+b)+c = " << (a + b) + c << '\n';
    std::cout << "a+(b+c) = " << a + (b + c) << '\n';

    std::cout << "\n=== Negative Of A Sum ===\n";

    std::cout << "-(a+b) = " << -(a + b) << '\n';
    std::cout << "-a + (-b) = " << (-a) + (-b) << '\n';

    return 0;
 }