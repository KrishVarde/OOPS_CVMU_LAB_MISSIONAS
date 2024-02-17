#include<iostream>
using namespace std;

class Oprations {
private:
    int num1, num2;
public:
    int Add(int, int);
    int mul(int, int);
    int sub(int, int);
    int division(int, int);
    void fetch();
    void Ch();
};

int Oprations::Add(int a, int b) {
    return a + b;
}

int Oprations::mul(int a, int b) {
    return a * b;
}

int Oprations::division(int a, int b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Cannot divide by zero!" << endl;
        return 0;
    }
}

int Oprations::sub(int a, int b) {
    return a - b;
}

void Oprations::fetch() {
    cout << "Please enter two numbers respectively:";
    cin >> num1 >> num2;
}

void Oprations::Ch() {
    char a;
    cout << "Please enter the operation you want to perform:";
    cin >> a;
    switch (a) {
    case '+':
        cout << "Result: " << Add(num1, num2) << endl;
        break;
    case '-':
        cout << "Result: " << sub(num1, num2) << endl;
        break;
    case '*':
        cout << "Result: " << mul(num1, num2) << endl;
        break;
    case '/':
        cout << "Result: " << division(num1, num2) << endl;
        break;
    default:
        cout << "Please enter a valid operator" << endl;
        break;
    }
}

int main() {
    Oprations op;
    op.fetch();
    op.Ch();
    return 0;
}