int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;

    float remaining_snow = snow_on_ground;
    for (int i = 0; i < hours; i++) {
        remaining_snow += snow_fall_rate;
        remaining_snow *= (1.0 - snow_melt_rate);
    }

    cout << remaining_snow << endl;

    return 0;
}