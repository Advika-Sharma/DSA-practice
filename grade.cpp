#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter marks" << endl;
    cin >> a;

    if (a >= 90) {
        cout << "A" << endl;
    } 
    else if (a >= 80 && a < 90) {
        cout << "B" << endl;
    } 
    else if (a > 0 && a < 80) {
        cout << "C" << endl;
    } 
    else {
        cout << "Not valid" << endl;
    }

    return 0;
}
