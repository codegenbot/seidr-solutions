int main() {
    int hours;
    double snow, snow_rate, melt_rate;
    cin >> hours >> snow >> snow_rate >> melt_rate;

    for (int i = 0; i < hours; i++) {
        snow += snow_rate;
        snow = max(0.0, snow * (1.0 - melt_rate));
    }

    cout << snow << endl;

    return 0;
}