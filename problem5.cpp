#include <iostream>
using namespace std;

int main() {
    float a, c;
    string b;
    cin >> a >> b >> c;

    if (b == "+") {
        cout << (a + c);
    } else if (b == "-") {
        cout << (a - c);
    } else if (b == "*") {
        cout << (a * c);
    } else if (b == "/") {
        cout << (a / c); 
    }

    return 0;
}
