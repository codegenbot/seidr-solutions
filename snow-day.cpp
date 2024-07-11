int main() {
    int hours;
    float snow_ground, snow_fall_rate, snow_melt_rate;
    cin >> hours >> snow_ground >> snow_fall_rate >> snow_melt_rate;
    
    float snow_amount = snow_ground;
    for (int i = 0; i < hours; ++i) {
        snow_amount += snow_fall_rate;
        snow_amount *= (1 - snow_melt_rate);
    }
    
    cout << snow_amount << endl;
    
    return 0;
}