```cpp
double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow -= totalSnow * proportionMeltingPerHour; 
        totalSnow += rateOfSnowfall; 
    }
    
    return totalSnow;
}

int main() {
    int hours = 0; 
    float initialSnow = 0.0f; 
    float rateOfSnowfall = 0.0f;
    float proportionMeltingPerHour = 0.0f;

    cout << "Enter number of hours: ";
    cin >> hours;

    cout << "Enter the amount of initial snow: ";
    cin >> initialSnow;

    cout << "Enter the rate of snow fall: ";
    cin >> rateOfSnowfall;

    cout << "Enter proportion of snow melting per hour: ";
    cin >> proportionMeltingPerHour;

    double totalSnow = snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour);

    cout << "Total Snow after the day: " << totalSnow << endl;

    return 0;
}