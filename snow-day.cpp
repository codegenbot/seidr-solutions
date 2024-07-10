int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, melting_proportion, remaining_snow;
    
    cin >> hours >> snow_on_ground >> snow_fall_rate >> melting_proportion;
    
    for (int i = 0; i < hours; i++) {
        remaining_snow = snow_on_ground + snow_fall_rate - (snow_fall_rate * melting_proportion);
        snow_on_ground = remaining_snow;
    }
    
    cout << remaining_snow << endl;
    
    return 0;
}