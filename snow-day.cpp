#include <iostream>
using namespace std;
double calculateSnow(double hours, double snowOnGround, double snowFallRate, double snowMeltRate) {
    for (double i = 0; i < hours + 0.0001; i++) {
        double snowMelted = snowOnGround * snowMeltRate;
        snowOnGround = snowOnGround + snowFallRate - snowMelted;
    }
    return snowOnGround;
}
int main() {
    double hours, snowOnGround, snowFallRate, snowMeltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    
    double result = calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate);
    cout.precision(15);
    cout << result << endl;
    
    return 0;
}