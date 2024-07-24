int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, snow_melt_proportion;
    cin >> hours >> snow_on_ground >> snow_fall_rate >> snow_melt_proportion;
    
    float total_snow_on_ground = snow_on_ground;
    for (int i = 0; i < hours; i++) {
        total_snow_on_ground += snow_fall_rate;
        total_snow_on_ground -= snow_melt_proportion * total_snow_on_ground;
        if (total_snow_on_ground < 0.0) {
            total_snow_on_ground = 0.0;
        }
    }

    cout << total_snow_on_ground << endl;
    return 0;
}