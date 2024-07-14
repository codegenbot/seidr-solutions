#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float currentSnow, float rateOfSnowfall, float proportionOfSnowMelting) {
    double totalSnow = 0.0;
    
    for (int i = 0; i < hours; i++) {
        // Add the amount of snow that fell during this hour
        totalSnow += rateOfSnowfall;
        
        // Subtract the amount of snow that melted during this hour
        totalSnow -= currentSnow * proportionOfSnowMelting;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float currentSnow, rateOfSnowfall, proportionOfSnowMelting;

    cin >> hours >> currentSnow >> rateOfSnowfall >> proportionOfSnowMelting;

    cout << fixed << setprecision(10) << snowDay(hours, currentSnow, rateOfSnowfall, proportionOfSnowMelting) << endl;

    return 0;
}