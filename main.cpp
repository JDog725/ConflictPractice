#include <iostream>
using namespace std;

int add(int a,int b);
int average(int a, int b, int c);

int main()
{
    cout << "My name is Joe\n";
    cout << "Hello World!\n";

    cout << "5+7 = " <<add(5, 7) <<endl;

    int num1, num2, num3;
    cout << "Hello World!\n";
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;
    cout << "Enter third integer: ";
    cin >> num3;
    cout << "The average of the three numbers is " <<average(num1, num2, num3) <<endl;
    return 0;
}

int add(int a, int b)
{
    return a+b;
}

int average(int a, int b, int c)
{
    int sum = a + b + c;
    double average = static_cast<double>(sum)/3;
    return average;
}