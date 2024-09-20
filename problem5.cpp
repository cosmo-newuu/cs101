#include <iostream>
using namespace std;
int main() {
    float a,c;
    string b;
    cin >> a >> b >> c;
    if (c == "+"){
        cout << a+c;
    } else if ( c == "*"){
        cout << a*c;
    } else if ( c == "-"){
        cout << a-c;

    } else if (c == "/"){
        cout << a/c;
    }

}
