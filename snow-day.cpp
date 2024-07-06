#include <iostream>
using namespace std;

int main() {
    int hours;
    string hoursString;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;

    cout << "Enter number of hours: ";
    cin >> hoursString;
    hours = stoi(hoursString);

    cout << "Enter initial snow: ";
    cin >> initialSnow;
    
    cout << "Enter rate of snow fall: ";
    cin >> rateOfSnowfall;

    cout << "Enter proportion of snow melting per hour: ";
    cin >> proportionMeltingPerHour;

    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour);
    
    cout << "Amount of snow on the ground after " << hoursString << " hours is: " << to_string(result) << endl;

    return 0;
}

double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow -= totalSnow * proportionMeltingPerHour; 
        totalSnow += rateOfSnowfall; 
    }
    
    return totalSnow;
}