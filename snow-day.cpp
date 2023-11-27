#include <iostream>
#include <iomanip> 

using namespace std;

double calculateSnow(float hours, double snowOnGround, double snowFallRate, double snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltRate;
    }
    return round(snowOnGround * 1e15) / 1e15; 
}

int main() {
    float hours, snowFallRate, snowMeltRate;
    double snowOnGround;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    cout << fixed << setprecision(15) << calculateSnow(hours, snowOnGround, snowFallRate, snowMeltRate) << endl;
    return 0;
}