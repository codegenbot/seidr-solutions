#include <iostream>
using namespace std;

double calculateSnow(double hours, double snowOnGround, double snowFallRate, double snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        double snowMelted = snowOnGround * snowMeltRate;
        snowOnGround += snowFallRate - snowMelted;
    }
    return snowOnGround;
}

int main() {
    double hours, snowOnGround, snowFallRate, snowMeltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    
    double result = calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate);
    cout << result << endl;
    
    return 0;
}