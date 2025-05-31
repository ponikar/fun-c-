#include <iostream>
using namespace std;
class Ex
{
    int arr[10];
    int size;
    public:
    Ex() : size(0) {}
    void All()
    {
        insert(10);
        insert(20);
        insert(30);
        insert(40);
        insert(50);
        insert(60);
        insert(70);
        insert(80);
        insert(90);
        insert(100);
        cout << arr << endl;
        cout << "Lookup index 1: " << lookup(1) << endl;
        cout << "Lookup index 5: " << lookup(5) << endl;

        removeLast();
        cout << "Array after removing last element: ";
        print();

        insert(140);
        cout << "Array after inserting 140: ";
        cout << arr << endl;
        print();
    }
    private:
        void insert(int value) 
        {
            if (size < 10) 
            {
                arr[size++] = value;
            } 
            else 
            {
                cout << "Array is full!" << endl;
            }
        }
        int lookup(int index) 
        {
            if (index >= 0 && index < size) 
            {
                return arr[index];
            } 
            else 
            {
                cout << "Invalid index! ";
                return -1;
            }
        }
        void removeLast() 
        {
            if (size > 0) 
            {
                size--;
            } 
            else 
            {
                cout << "Array is empty!" << endl;
            }
        }
        void print() 
        {
            for (int i = 0; i < size; i++) 
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main() 
{
    Ex sa;
    sa.All();
    return 0;
}