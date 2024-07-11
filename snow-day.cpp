int main() {
    int hours;
    float ground_snow, snow_fall_rate, melting_proportion;
    
    cin >> hours >> ground_snow >> snow_fall_rate >> melting_proportion;
    
    for (int i = 0; i < hours; i++) {
        ground_snow += snow_fall_rate;
        ground_snow -= ground_snow * melting_proportion;
    }
    
    cout << ground_snow << endl;
    
    return 0;
}