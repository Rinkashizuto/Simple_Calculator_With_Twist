#include<iostream>

using std::cout;
using std::cin;

int main(){

    char op;
    double num1;
    double num2;
    double num3;
    double sum;
    std::string response;

    cout << "**********CALCULATOR PROJECT**********\n";
    cout << "Please Select Operator (+, -, /, *)\n";
    cin >> op;
    cout << "Provide #1\n";
    cin >> num1;
    cout << "Provide #2:\n";
    cin >> num2;
    cout << "Would you like to provide a 3rd number?(Y/N)\n";
    cin >> response;

    if(response == "Y" || response == "y"){
        cout << "Please Provide #3:\n";
        cin >> num3;
        switch (op)
        {
        case '+' : sum = num1 + num2 + num3;
            cout << "Sum : " << sum << '\n';
            break;
        case '-' : sum = num1 - num2 - num3;
            cout << "Sum : " << sum << '\n';
            break;
        case '/' : sum = num1 / num2 / num3;
            cout << "Sum : " << sum << '\n';
            break;
        case '*' : sum = num1 * num2 * num3;
            cout << "Sum : " << sum << '\n';
            break;
        default:
            cout << "Invalid Input!";
            break;
        }
    }
    else if(response == "N" || response == "n"){
        switch (op)
        {
        case '+':
            sum = num1 + num2;
            cout << "Sum : " << sum << '\n';
            break;
        case '-' :
            sum = num1 - num2;
            cout << "Sum : " << sum << '\n';
            break;
        case '/' :
            sum = num1 / num2;
            cout << "Sum : " << sum << '\n';
            break;
        case '*' :
            sum = num1 * num2;
            cout << "Sum : " << sum << '\n';
            break;
        default:
            cout << "Invalid Input!";
            break;
        }
    }
    else{
        cout << "PLEASE INPUT SOMETHING VALID";
    }
    return 0;
}