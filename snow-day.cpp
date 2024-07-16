float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    return initialSnow + (rateOfSnowfall * hours) - proportionMeltingPerHour * hours;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;
    cin >> initialSnow >> rateOfSnowfall >> proportionMeltingPerHour;

    cout << fixed << setprecision(2) << showpoint << snowDay(hours, initialSnow, (int)(rateOfSnowfall * 100), proportionMeltingPerHour/100.0) << endl;
    return 0; }