#include <iostream>
using namespace std;

float calculateSnow(float hours, float snow, float snowfall, float melting) {
    for (int i = 0; i < hours; i++) {
        snow += snowfall;
        snow -= snow * melting;
    }
    return snow;
}

int main() {
    float hours, snow, snowfall, melting;
    cin >> hours >> snow >> snowfall >> melting;
    cout << calculateSnow(hours, snow, snowfall, melting) << endl;
    return 0;
}