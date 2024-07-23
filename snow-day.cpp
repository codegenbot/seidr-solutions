int main() {
    int hours;
    float current_snow, snow_fall_rate, snow_melt_rate;
    
    cin >> hours >> current_snow >> snow_fall_rate >> snow_melt_rate;
    
    for (int i = 0; i < hours; ++i) {
        current_snow = current_snow + snow_fall_rate - (current_snow * snow_melt_rate);
    }
    
    cout << current_snow << endl;
    
    return 0;
}