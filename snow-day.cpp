int main() {
    int hours;
    double initial_snow, snow_fall_rate, snow_melt_rate;
    cin >> hours >> initial_snow >> snow_fall_rate >> snow_melt_rate;

    double snow_on_ground = initial_snow;
    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        snow_on_ground = snow_on_ground * (1.0 - snow_melt_rate);
    }

    cout << snow_on_ground << endl;
    return 0;
}