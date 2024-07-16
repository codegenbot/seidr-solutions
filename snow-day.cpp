int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;
    cin >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;

    cout << fixed << setprecision(2) << std::showpoint << snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour) << endl;
    
    return 0;