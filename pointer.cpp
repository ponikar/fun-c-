#include <iostream>
using namespace std;

void address(int *ptrr) // pass by reference using pointer
{
    *ptrr = 22;
}
void change(int m) // pass by value
{
    m = 29;
}

int main()
{
    int m = 2;
    change(m);
    cout << m << endl;
    address(&m);
    cout << m << endl;
    int a = 15;
    int *p = &a;
    int **q = &p;

    cout << *p << endl;
    cout << **q << endl;
    cout << p << endl;
    cout << q << endl;
    cout << *q << endl;

    float b = 29;
    float *ptr = &b;
    float **pptr = &ptr;

    cout << *ptr << endl;
    cout << **pptr << endl;
    cout << ptr << endl;
    cout << pptr << endl;
    cout << *pptr << endl;
    
    return 0;
}