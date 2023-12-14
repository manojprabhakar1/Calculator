#include <iostream>
#include "Addition/Addition.h"
#include "Multiplication/Multiplication.h"
#include "Division/Division.h"
#include "Subtraction/Subtraction.h"

int main() {
    //Calculator calc;

    double num1, num2;
    char op;
        
    
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator (+, -, *, /): ";
    
    std::cin >> op;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    double result;
    switch (op) {
        case '+':
            
            std::cout << "Result: " << add(num1, num2) << std::endl;
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        
        
        default:
            std::cout << "Invalid operator!";
            return 1;
    
    }

    std::cout << "Result: " << result << std::endl;
    
    return 0;
}
