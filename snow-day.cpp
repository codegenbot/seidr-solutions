int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, melt_rate;

    cin >> hours >> snow_on_ground >> snow_fall_rate >> melt_rate;

    float snow = snow_on_ground;
    for (int i = 0; i < hours; ++i) {
        snow += snow_fall_rate;
        snow -= snow * melt_rate;
        if (snow < 0.0) {
            snow = 0.0;
        }
    }

    cout << snow << endl;

    return 0;
}