int main() {
    int hours;
    float snow_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_ground >> snow_fall_rate >> snow_melt_rate;

    float total_snow = snow_ground;
    for (int i = 0; i < hours; i++) {
        total_snow += snow_fall_rate;
        total_snow -= snow_melt_rate * total_snow;
        if (total_snow < 0) total_snow = 0;
    }

    cout << total_snow << endl;

    return 0;
}