#include <iostream>

using namespace std;

float calculateSnow(float snowGround, float snowFallRate, int hours) {
    for(int i = 0; i < hours; i++) {
        snowGround += snowFallRate;
        snowGround *= (1 - 0.01 * (int)snowGround);
    }
    return snowGround;
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;
    
    float snowGround, snowFallRate, proportionMelted;
    
    cout << "Enter initial snow ground amount in feet: ";
    cin >> snowGround;
    
    cout << "Enter rate of snow fall in feet per hour: ";
    cin >> snowFallRate;
    
    cout << "Enter the proportion of melted snow per hour (as a decimal): ";
    cin >> proportionMelted;

    float calculatedSnow = calculateSnow(snowGround, snowFallRate, hours);

    cout << fixed << setprecision(2) << calculatedSnow << endl;
    
    return 0;
}