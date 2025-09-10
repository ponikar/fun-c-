#include <iostream>
using namespace std;

class Stack
{
private:
    int array[10];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void add(int &a)
    {
        if(top >= 9)
        {
            cout << "Stack Overflow" << endl;
            return; 
        }
        array[++top] = a;
    }

    int del()
    {
        if(top < 0)
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return array[top--];
    }

    int CurrentPosition()
    {
        return top;
    }

    void print()
    {
        if(top < 0)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack contents: ";
        for(int i = 0; i <= top; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

class Queue
{
private:
    int array[10];
    int front;
    int back;

public:
    Queue()
    {
        front = 0;
        back = -1;
    }

    void insert(int &a)
    {
        if(back >= 9)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        array[++back] = a;
    }

    int del()
    {
        if(front > back)
        {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        return array[front++];
    }

    void PrintFrontIndex()
    {
        cout << "Front Index: " << front << endl;
    }

    void PrintBackIndex()
    {
        cout << "Back Index: " << back << endl;
    }

    void print()
    {
        if(front > back)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue contents: ";
        for(int i = front; i <= back; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

};
int main()
{
    Stack s;
    Queue q;
    int choice, value;

    while (true)
    {
        cout << "\nStack and Queue Operations" << endl;
        cout << "1. Add to Stack" << endl;
        cout << "2. Delete from Stack" << endl;
        cout << "3. Print Stack" << endl;
        cout << "4. Show Stack Top Position" << endl;
        cout << "5. Insert to Queue" << endl;
        cout << "6. Delete from Queue" << endl;
        cout << "7. Print Queue" << endl;
        cout << "8. Show Queue Front and Back Indices" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice (1-9): ";

        if(!(cin >> choice))
        {
            cout << "Invalid input! Please enter a number between 1 and 9." << endl;
            continue;
        }
        if(choice == 9)
        {
            cout << "Exiting the Program." << endl;
            break;
        }

        switch(choice)
        {
            case 1:
            cout << "Enter a number to add into a stack: ";
            if(cin >> value)
            {
                s.add(value);
            }
            else
            {
                cout << "Invalid input! Please enter a valid number." << endl;
            }
            break;

            case 2:
            s.del();
            break;

            case 3:
            s.print();
            break;

            case 4:
            if(s.CurrentPosition() < 0)
            {
                cout << "Stack is empty." << endl;
            }
            else
            {
                cout << "Stack top position: " << s.CurrentPosition() <<endl;
            }
            break;
            
            case 5:
            cout << "Enter a number to insert into a queue: ";
            if(cin >> value)
            {
                q.insert(value);
            }
            else
            {
                cout << "Invalid input! Pleasse enter a valid number." << endl;
            }
            break;

            case 6:
            q.del();
            break;

            case 7: 
            q.print();
            break;

            case 8:
            q.PrintFrontIndex();
            q.PrintBackIndex();
            break;

            default:
            cout << "Invalid choice! Please select a number between 1 to 9." << endl;
        }
    }
    // int a = 15, b = 10, c = 29, d = 2;
    // s.add(a);
    // s.add(b);
    // s.add(c);
    // s.add(d);
    // s.print();
    // cout << "Stack current position: " << s.CurrentPosition() << endl;
    // cout << "Stack deleted: " << s.del() << endl;
    // s.print();
    // cout << "Stack current position: " << s.CurrentPosition() << endl;

    // cout << "\n" << endl;

    // int m = 20, n = 30, o = 40, p = 50;
    // q.insert(m);
    // q.insert(n);
    // q.insert(o);
    // q.insert(p);
    // q.print();
    // q.PrintFrontIndex();
    // q.PrintBackIndex();
    // cout << "Queue deleted: " << q.del() << endl;
    // q.PrintFrontIndex();
    // q.PrintBackIndex();
    // q.print();

    return 0;
}