int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_rate;
    float snow_after_hours = snow_on_ground;
    for (int i = 0; i < hours; ++i) {
        snow_after_hours += snow_fall_rate;
        snow_after_hours = snow_after_hours - (snow_after_hours * snow_melt_rate);
        if (snow_after_hours < 0.001) {
            snow_after_hours = 0.0;
            break;
        }
    }
    cout << snow_after_hours << endl;
    return 0;
}