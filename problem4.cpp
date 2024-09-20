#include <iostream>
using namespace std;
int main() {
    int n1,n2,n3,n4;
    cin >> n1 >> n2 >> n3 >> n4;

    int a = 0;
    if (n1 == n2) {
        a++;
    }
    if (n1 == n3) {
        a++;
    }
    if (n1 == n4) {
        a++;
    }
    if (n2 == n3) {
        a++;
    }
    if (n2 == n4) {
        a++;
    }
    if (n3 == n4) {
        a++;
    }
    cout << a/2;  //adjusting



}
