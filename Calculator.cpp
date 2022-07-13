#include <iostream>
#include <Windows.h>


int main()
{

    // setting some stuff to make sure the calculator would work properly
    SetConsoleTitleA("Calculator");
    double firstNumber, secondNumber;

    int CaculatorMode = 0;


    std::cout << "Please select what you would like to do" << std::endl;
    std::cout << "1 - Multiplication\n2 - Division\n3 - Addition\n4 - Subtraction" << std::endl;
    std::cin >> CaculatorMode;


    // checking what the user selected, if its not 1-4 then it outputs "Invalid Calucation mode!"
    if (CaculatorMode != 1 && CaculatorMode != 2 && CaculatorMode != 3 && CaculatorMode != 4) {
        std::cout << "Invalid Calucation mode!" << std::endl;
            exit(0);
    }
    else {
        std::cout << "Enter your first number" << std::endl;
        std::cin >> firstNumber;

        std::cout << "Enter your second number" << std::endl;
        std::cin >> secondNumber;


        // switches to caculator mode, going off the valid user input
        switch (CaculatorMode) {
        case 1:
            std::cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber << std::endl;
            break;
        case 2:
            std::cout << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber << std::endl;
            break;
        case 3:
            std::cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << std::endl;
            break;
        case 4:
            std::cout << firstNumber <<  " - " << secondNumber << " - " << firstNumber - secondNumber << std::endl;
            break;
        }
    }

    return 0;

}
