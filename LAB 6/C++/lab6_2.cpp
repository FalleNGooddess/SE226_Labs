#include <iostream>
#include <cmath>

using namespace std;

void calculatedSumRecursively(int d, double& total) {

    if (d == 1) {
        total += 1.0;
        return;
    }

    double donut = pow(-1, d + 1) / d;
    total += donut;
    calculatedSumRecursively(d - 1, total);
}

void calculatedSumRecursively() {
    int d;
    cout << "Enter a number for n: ";
    cin >> d;

    double total = 0;
    calculatedSumRecursively(d, total);
    cout << "Sum of the calculation is: " << total << endl;
    cout << "...Ty for choosing us... ";
}

int main() {
    calculatedSumRecursively();
    return 0;
}
