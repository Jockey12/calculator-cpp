#include <iostream>
#include <unordered_map>
#include <functional>
#include <iomanip>
using namespace std;

bool divByZero(float a, float b, float c, float d) {
    return b==0||c==0||d==0;
}

float evaluate(float a, float b, float c, float d, char op) {
    unordered_map<char, function<float(float, float, float, float)>> operations;
    operations = {
        {'+', [](float a, float b, float c, float d) {return a + b + c + d;}},
        {'-', [](float a, float b, float c, float d) {return a - b - c - d;}},
        {'/', [](float a, float b, float c, float d) {return a / b / c / d;}},
        {'*', [](float a, float b, float c, float d) {return a * b * c * d;}}
    };
    return operations[op](a, b, c, d);
}

int main(int argc, char** argv)
{
    float a, b, c, d;
    char op;

    cout << "Calculator version 1.0.0" << endl;
    cout << "Please enter 4 numbers: ";
    cin >> a >> b >> c >> d;

    cout << "Enter operator: +, -, *, /: ";
    cin >> op;

    if (op == '/' && divByZero(a, b, c, d)) {
        throw "Division by zero not permitted";
    }

    cout << evaluate(a, b, c, d, op) << endl;

    return 0;
}



