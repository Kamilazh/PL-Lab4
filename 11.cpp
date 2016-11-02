#include <iostream>
using namespace std;
int main () {
    int k;
    cin >> k;
    if (k % 3 == 0 || k%3==2 && k != 2 ) {
        cout  << "Yes";
    } else {
        cout  << "No";
    } 
    return 0;
}
