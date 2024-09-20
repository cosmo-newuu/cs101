#include <iostream>
using namespace std;
int main() {
    string gender;
    float height;
    cin >> gender >> height;
    if (gender == "F" and height < 1.60){
        cout << "Short";
    } else if (gender == "F" and height >=1.60 and h<1.75){
        cout << "Normal";
    } else if (gender == "F" and height >=1.75) {
        cout << "Tall";
    }
    if (gender == "M" and height < 1.70){
        cout << "Short";
    } else if (gender == "M" and height >=1.70 and h<1.85){
        cout << "Normal";
    } else if (gender == "M" and height >=1.85) {
        cout << "Tall";
    }


}
