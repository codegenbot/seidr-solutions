#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        int newSnow = static_cast<int>(rateOfSnowFall); 
        double meltedSnow = totalSnow * proportionOfSnowMeltingPerHour;
        totalSnow -= meltedSnow; 
        totalSnow += newSnow; 
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    cin >> hours >> initialSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    cout << fixed << setprecision(10) << static_cast<double>(snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour)) << endl;

    return 0;
}