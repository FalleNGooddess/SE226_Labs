#include <iostream>
using namespace std;

void find_common_elements(int donut[], int donut_size, int nutella[], int nutella_size) {
    cout << "Common ones are: ";
    for (int d = 0; d < donut_size; d++) {
        for (int n = 0; n < nutella_size; n++) {
            if (donut[d] == nutella[n]) {
                cout << donut[d] << " ";
                break;
            }
        }
    }
    cout << endl;
}
