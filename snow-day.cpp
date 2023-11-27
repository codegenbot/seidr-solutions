#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float totalSnowfall = snowFallRate * hours;
    float totalMeltedSnow = totalSnowfall * meltingRate;
    
    float finalSnow = initialSnow + totalSnowfall - totalMeltedSnow;
    
    return finalSnow;
}

int main() {
    float hours, initialSnow, snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    
    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    cout << finalSnow << endl;
    
    return 0;
}