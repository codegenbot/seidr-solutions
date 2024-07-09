#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> std::setw(4) >> hours;  

    double initialSnow;
    cout << "Enter the total amount of snow initially (in feet): ";
    cin >> ws >> initialSnow;

    double rateOfSnowFall;
    cout << "Enter the rate of snow fall per hour (in feet/hour): ";
    cin >> ws >> rateOfSnowFall;

    double proportionOfSnowMeltingPerHour;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> ws >> proportionOfSnowMeltingPerHour;

    double totalSnow = initialSnow;  // Initialize with initialSnow

    for (int i = 0; i < hours; i++) {
        double newSnow = rateOfSnowFall;
        totalSnow += newSnow - proportionOfSnowMeltingPerHour * totalSnow;
    }
    
    cout << fixed << setprecision(5);
    cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow << " ft" << endl;
    return 0;
}