#include <iostream>
using namespace std;

float calculateSnowAmount(int hours, float initialSnow, float snowfallRate, float meltRate) {
    float snowAmount = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        // Add snow for this hour
        snowAmount += snowfallRate;
        
        // Calculate melted snow
        float meltedSnow = snowAmount * meltRate;
        
        // Subtract melted snow
        snowAmount -= meltedSnow;
    }
    
    return snowAmount;
}

int main() {
    // Read input values
    int hours;
    float initialSnow, snowfallRate, meltRate;
    
    cin >> hours >> initialSnow >> snowfallRate >> meltRate;
    
    // Calculate and print snow amount after given hours
    float finalSnowAmount = calculateSnowAmount(hours, initialSnow, snowfallRate, meltRate);
    cout << finalSnowAmount << endl;
    
    return 0;
}