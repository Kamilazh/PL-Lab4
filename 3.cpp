#include <iostream>
using namespace std;
int main() {
    int X1, Y1, X2, Y2;
    cin >> X1 >> Y1 >> X2 >> Y2;
    if ((X1 == Y1 && X2 == Y2) || abs(Y1-X1==1) && abs(Y2-X2==1)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
