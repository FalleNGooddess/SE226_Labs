#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Please enter a number between 3 and 9 (inclusive): ";
    cin >> n;

    for (int i=1; i<=2*n-1; i++) {
        int j = i <= n ? i : 2*n-i;
        for (int k=1; k<=j; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

