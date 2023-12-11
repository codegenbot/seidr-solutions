#include <iostream>
using namespace std;

int main() {
    float snow, rate, melt, hours;
    cin >> hours >> snow >> rate >> melt;
    for (int i = 0; i < hours; i++) {
        snow += rate * (1 - melt);
    }
    cout << fixed << setprecision(6) << snow << endl;
    return 0;
}