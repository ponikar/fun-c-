#include <iostream>


using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x = 5;
    int y = 10;
    int result = sum(x, y);
    cout << "The sum of " << x << " and " << y << " is: " << result << endl;
    return 0;
}