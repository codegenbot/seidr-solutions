#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow; 

    for (int i = 0; i < hours; i++) {
        double netSnowfall = rateOfSnowfall - (totalSnow * proportionMeltingPerHour);
        if (netSnowfall < 0) {
            totalSnow = 0;
        } else {
            totalSnow += netSnowfall;
        }
    }
    
    return totalSnow;
}

int main() {
    float hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour;

    cout << "Enter number of hours: ";
    cin >> hours;
    cout << "Enter initial snow: ";
    cin >> initialSnow;
    cout << "Enter rate of snow fall: ";
    cin >> rateOfSnowfall;
    cout << "Enter proportion of snow melting per hour: ";
    cin >> proportionMeltingPerHour;

    double result = snowDay((int)hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour);
    
    cout << "Amount of snow on the ground after " << hours << " hours is: " << result << endl;

    return 0;
}