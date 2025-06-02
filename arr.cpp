#include <iostream>
#include <string>
using namespace std;

class MessageStore {
    string messages[10];  // Array to store 10 messages
    int count = 0;

public:
    void insertMessage(string msg) {
        if (count < 10) {
            messages[count] = msg;
            count++;
        } else {
            cout << "Array is full!" << endl;
        }
    }
    string getMessage(int index) {
        if (index >= 0 && index < count) {
            return messages[index];
        } else {
            return "Invalid index";
        }
    }
};

int main() {
    MessageStore store;
    store.insertMessage("Hello");
    store.insertMessage("World");
    store.insertMessage("its");
    store.insertMessage("Mahek");
    store.insertMessage("Nimje");
    cout << store.getMessage(0) << endl;  
    cout << store.getMessage(1) << endl;  
    cout << store.getMessage(2) << endl;
    cout << store.getMessage(3) << endl;
    cout << store.getMessage(4) << endl;
    cout << store.getMessage(5) << endl;  
    return 0;
}
