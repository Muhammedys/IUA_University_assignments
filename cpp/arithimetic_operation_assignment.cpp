#include <iostream>
#include <conio.h>
 
using namespace std;

int main(int argc, char const *argv[])
{
    int firstNumber,secondNumber;
    char operation;

    cout << "Enter the first number" << endl;
    cin >> firstNumber;

    cout << "Enter the second number" << endl;
    cin >> secondNumber;

    cout << "Enter operation betwwen +, -, /, *" << endl;
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << firstNumber + secondNumber << endl;;
        break;
    case '-':
        cout << firstNumber - secondNumber << endl;
        break;
    case '/':
        cout << firstNumber / secondNumber << endl;
        break;
    case '*':
        cout << firstNumber * secondNumber << endl;
        break;
    
    default:
        cout << "Invalid operation" << endl;
        break;
    }

    getch();

    return 0;
}
