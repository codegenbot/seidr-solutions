int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_per_hour;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_per_hour;

    float snow_on_ground_after = snow_on_ground;
    for (int i = 0; i < hours; ++i) {
        snow_on_ground_after += snow_fall_rate;
        snow_on_ground_after = snow_on_ground_after - snow_on_ground_after * snow_melt_per_hour;
    }

    cout << snow_on_ground_after << endl;

    return 0;
}