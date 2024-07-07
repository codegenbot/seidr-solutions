#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow; // Initialize to the initial amount of snow
    double totalSnowfall = 0.0; // Initialize the total snowfall

    for (int i = 0; i < hours; i++) {
        totalSnowfall += rateOfSnowfall; // Calculate the total snowfall for this hour
        double melting = totalSnow * proportionMeltingPerHour;
        totalSnow -= melting;
        if (totalSnow < 0) {
            totalSnow = 0.0;
        }
        totalSnow += rateOfSnowfall - melting;
    }

    return totalSnow + totalSnowfall; // Return the total snow, including initial and total snowfall
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;

    cout << "Enter number of hours: ";
    cin >> hours;
    cout << "Enter initial snow: ";
    cin >> initialSnow;
    cout << "Enter rate of snow fall: ";
    cin >> rateOfSnowfall;
    cout << "Enter proportion of snow melting per hour: ";
    cin >> proportionMeltingPerHour;

    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour);
    
    cout << "Amount of snow on the ground after " << hours << " hours is: " << result << endl;

    return 0;
}