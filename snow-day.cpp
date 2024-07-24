int main() {
    int hours;
    float snow, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow >> snow_fall_rate >> snow_melt_rate;

    for (int i = 0; i < hours; ++i) {
        snow += snow_fall_rate;
        snow -= snow * snow_melt_rate;
    }

    cout << snow << endl;

    return 0;
}