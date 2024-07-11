int main() {
    int hours;
    float ground_snow;
    float snow_fall_rate;
    float melting_rate;
    
    cin >> hours >> ground_snow >> snow_fall_rate >> melting_rate;
    
    for (int i = 0; i < hours; ++i) {
        ground_snow += snow_fall_rate;
        ground_snow -= melting_rate * ground_snow;
    }
    
    cout << ground_snow << endl;
    
    return 0;
}