#include <iostream>
#include <cmath>

using namespace std;
double d = 0;

int main() {

    int donut;

    cout << "Enter a number for n: ";
    cin >> donut;

    sum_recursive(donut);
    cout << "......Sum of the given equation is: " << d << endl;
    cout << "...Ty for choosing us...";
    return 0;
}

void sum_recursive(int donut) {

    if (donut == 1) {
        d += 1;
        return;

    } else {
        sum_recursive(donut - 1);
        d += pow(-1, donut + 1) / donut;
        return;
    }
}

