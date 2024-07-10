#include <iostream>
#include <iomanip>
using namespace std;

double calculateTotalSnow(int hours, double initialSnow, double rateOfSnowFall, double proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;  // Initialize with initialSnow

    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall - proportionOfSnowMeltingPerHour * totalSnow;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;  

    double initialSnow;
    cout << "Enter the total amount of snow initially (in feet): ";
    cin >> initialSnow;

    double rateOfSnowFall;
    cout << "Enter the rate of snow fall per hour (in feet/hour): ";
    cin >> rateOfSnowFall;

    double proportionOfSnowMeltingPerHour;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionOfSnowMeltingPerHour;

    double totalSnow = calculateTotalSnow(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);  // Call the function and store result

    cout << fixed << setprecision(10);  
    cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow << " ft" << endl;
    return 0;
}