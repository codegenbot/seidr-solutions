int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallRate, meltPerHour;
    cin >> initialSnow >> snowFallRate >> meltPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFallRate, meltPerHour) << endl;
    return 0;}