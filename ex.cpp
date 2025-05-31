#include <iostream>
using namespace std;
class arr
{
    int arr[10] = {10,20,30,40,50,60,70,80};
    int pointer = 7;
    int count = 10;
    int a = 5;
    //cout << " " << a++ << endl;
public:
    void fun()
    {
        cout << "Lookup index 1: " << lookup(1) << endl;
        cout << "Lookup index 5: " << lookup(5) << endl;
        insert(90);
        print();
        insert(100);
        print();
        remove(5);
        print();
    }
private:
    void insert(int value) 
    {
        if (pointer < 10) 
        {
            //cout << pointer << endl;
            arr[++pointer] = value;
            //cout << pointer << endl;
        } 
        else 
        {
            cout << "Array is full!" << endl;
        }
    }
    int lookup(int index) 
    {
        if (index >= 0 && index < pointer) 
        {
            return arr[index];
        } 
        else 
        {
            cout << "Invalid index! ";
            return -1;
        }
    }
    void remove(int index) 
    {
        if (index < 0 || index >= pointer) 
        {
            cout << "Invalid index!" << endl;
            return;
        }
        for (int i = index; i < pointer - 1; i++) 
        {
            arr[i] = arr[i + 1];
        }
        pointer--;
    }
    void print()
    {
        for (int i = 0; i <= pointer; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() 
{
    arr sa;
    sa.fun();
    return 0;
}