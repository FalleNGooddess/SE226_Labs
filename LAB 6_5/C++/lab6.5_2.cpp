#include <iostream>
#include <algorithm>
using namespace std;

void find_palindromes(string donut[], int size) {
    cout << "Palindromes are: ";
    for (int d = 0; d < size; d++) {
        string dyg = donut[d];
        string rev_str = dyg;
        reverse(rev_str.begin(), rev_str.end());
        if (dyg == rev_str) {
            cout << dyg << " ";
        }
    }
    cout << endl;
}
