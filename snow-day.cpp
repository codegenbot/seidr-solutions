int main() {
    int hours;
    float initial_snow, snow_fall_rate, melt_rate;
    cin >> hours >> initial_snow >> snow_fall_rate >> melt_rate;
    
    for (int i = 0; i < hours; ++i) {
        initial_snow += snow_fall_rate;
        initial_snow -= melt_rate * initial_snow;
        if (initial_snow < 0) {
            initial_snow = 0;
        }
    }
    
    cout << initial_snow << endl;
    
    return 0;
}