#include <iostream>
using namespace std;
// Function to calculate square of a number
int square(int num) 
{
    return num * num;
}

int main() 
{
    // Variables
    int age = 18;
    double height = 5.8;
    string name;

    // Output
    cout << "Welcome to C++ Basics!" << endl;
    cout << "---------------------" << endl;

    // Input
    cout << "Enter your name: ";
    getline(cin, name);

    // Displaying variables
    cout << "Hello, " << name << "!" << endl;
    cout << "Your age: " << age << endl;
    cout << "Your height: " << height << " feet" << endl;

    // Basic arithmetic
    int a = 5, b = 3;
    cout << "\nArithmetic:" << endl;
    cout << a << " + " << b << " = " << (a + b) << endl;
    cout << a << " - " << b << " = " << (a - b) << endl;

    // Conditional
    cout << "\nConditional:" << endl;
    if (age >= 18) 
    {
        cout << "You are an adult!" << endl;
    } 
    else 
    {
        cout << "You are a minor!" << endl;
    }
    // Loop
    cout << "\nLoop (count 1 to 5):" << endl;
    for (int i = 1; i <= 5; i++) 
    {
        cout << i << " ";
    }
    cout << endl;
    // Function call
    cout << "\nFunction:" << endl;
    int num = 4;
    cout << "Square of " << num << " is " << square(num) << endl;
    return 0;
}