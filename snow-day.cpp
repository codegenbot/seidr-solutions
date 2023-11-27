#include <iostream>
using namespace std;

double calculateSnow(double hours, double snow, double rate, double melting) {
    for (int i = 0; i < hours; i++) {
        snow += rate - (snow * melting);
    }
    return snow;
}

int main() {
    double hours, snow, rate, melting;
    cin >> hours >> snow >> rate >> melting;
    double result = calculateSnow(hours, snow, rate, melting);
    cout << fixed << result << endl;
    return 0;
}