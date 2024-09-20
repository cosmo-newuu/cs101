#include <iostream>
using namespace std;

int main() {
    string gender;
    float height;
    cin >> gender >> height;
    if (gender == "F") {
        if (height < 1.60) {
            cout << "Short";
        } else if (height >= 1.60 && height < 1.75) {
            cout << "Normal";
        } else { 
            cout << "Tall";
        }
    } else if (gender == "M") {
        if (height < 1.70) {
            cout << "Short";
        } else if (height >= 1.70 && height < 1.85) {
            cout << "Normal";
        } else { 
            cout << "Tall";
        }
    } 

    return 0;
}
