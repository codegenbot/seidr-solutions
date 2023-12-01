#include <iostream>
#include <iomanip>

using namespace std;

double calculateSnow(int hours, double snowOnGround, double snowFallRate, double snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        double snowMelted = snowOnGround * snowMeltRate;
        snowOnGround = snowOnGround + snowFallRate - snowMelted;
    }
    return snowOnGround;
}

int main() {
    int hours;
    double snowOnGround, snowFallRate, snowMeltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    
    double result = calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate);
    cout << fixed << setprecision(15) << result << endl;
    
    return 0;
}