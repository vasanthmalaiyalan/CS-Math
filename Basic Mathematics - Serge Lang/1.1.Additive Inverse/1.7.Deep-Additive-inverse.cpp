#include <iostream>

int main() {

    int a = 5;

    std::cout << "=====================================\n";
    std::cout << "1.Additive Inverse\n";
    std::cout << "=====================================\n";

    std::cout << "a = " << a << '\n';

    int inverse_of_a = -a;

    std::cout << "inverse(a) = " << inverse_of_a << '\n';

    std::cout << "\nCheck:\n";
    std::cout << "a + inverse(a)\n";

    std::cout << a << " + " << inverse_of_a << " = " << a + inverse_of_a << '\n';

    std::cout << "\n";
    std::cout << "Meaning:\n";
    std::cout << inverse_of_a << " is the additive inverse of " << a << "\n\n";

    std::cout << "===================================\n";
    std::cout << "2. Additive Inverse Of -5\n";
    std::cout << "======================================\n";

    int minus_five = -5;

    std::cout << "number = " << minus_five << '\n';

    int inverse_of_minus_five = -minus_five;

    std::cout << "inverse(-5) = " << inverse_of_minus_five << '\n';
    std::cout << "\nCheck:\n";

    std::cout << minus_five << " + " << inverse_of_minus_five << " = " << minus_five + inverse_of_minus_five << '\n';
    std::cout << "\n";

    std::cout << "This is exactly:\n";
    std:: "-(-5) = " << inverse_of_minus_five << "\n\n";

    std::cout << "=========================================\n";
    std::cout << "3. Double Inverse\n";
    std::cout << "=========================================\n";

    int x = 5;

    int first_inverse = -x;
    int second_inverse = -first_inverse;

    std::cout << "x = " << x << '\n';

    std::cout << "first inverse = " << first_inverse << '\n';
    std::cout << "second inverse = " << second_inverse << '\n';

    std::cout << "\n";

    std::cout << "-(-x) = x\n\n";

    std::cout << "first inverse = " << first_inverse << '\n';
    std::cout << "second_inverse = " << second_inverse << '\n';

    std::cout << "\n";

    std::cout << "-(-x) = x\n\n";

    std::cout << "====================================\n";
    std::cout << "4.Subtraction Definition\n";
    std::cout << "======================================\n";

    int p = 10;
    int q = 3;

    std::cout << "p = " << p << '\n';
    std::cout << "q = " << q << '\n';

    std::cout << "\n";

    std::cout << "p - q = " << p - q << '\n';
    std::cout << "p + (-q) = " << p + (-q) << '\n';

    std::cout << "\n";

    std::cout << "a - b = a + (-b)\n\n";

    std::cout << "==================================\n";
    std::cout << "5. Why 5 - (-5) = 10 ?\n";
    std::cout << "==================================\n";

    int value = 5;

    std::cout << "5 - (-5)\n\n";

    std::cout << "Definition:\n";

    std::cout << "5 = (-5)\n";
    std::cout << "=\n";
    std::cout << "5 + ( inverse of -5 )\n\n";

    int inverse_minus_5 = -(-5);

    std::cout << "inverse of -5 = " << inverse_minus_5 << '\n';

    std::cout << "\n";

    std::cout << "5 + -(-5)" << inverse_minus_5 << " = " << value + inverse_minus_5 << '\n';
    std::cout << "\n";

    std::cout << "==============================\n";
    std::cout << "6. Commutativity\n"; 
    std::cout << "===============================\n";

    int b = 3;
    
    std::cout << "a + b = " << a + b << '\n';
    std::cout << "b + a = " << b + a << '\n';

    std::cout << "\n";

    std::cout << "Order changed.\n";
    std::cout << "Answer same.\n\n";

    std::cout << "==================================\n";
    std::cout << "7. Associativity\n";
    std::cout << "=====================================\n";

    int c = 9;

    std::cout << "(a+b)+c = " << (a + b) + c << '\n';
    std::cout << "a+(b+c) = " << a + (b + c) << '\n';
    std::cout << "\n";

    std::cout << "Grouping changed .\n";
    std::cout << "Anuswer same.\n";

}