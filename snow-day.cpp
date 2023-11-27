#include <iostream>
#include <iomanip> 

using namespace std;

float calculateSnow(float hours, float snow, float rate, float melting) {
    for (int i = 0; i < hours; i++) {
        snow += rate - (snow * melting);
    }
    return snow;
}

int main() {
    float hours, snow, rate, melting;
    cin >> hours >> snow >> rate >> melting;
    float result = calculateSnow(hours, snow, rate, melting);

    cout << fixed << setprecision(16) << result << endl;
    return 0;
}