int main() {
    int hours;
    float snow_on_ground, snow_fall_rate, melt_proportion;
    
    cin >> hours >> snow_on_ground >> snow_fall_rate >> melt_proportion;
    
    for (int i = 0; i < hours; ++i) {
        snow_on_ground += snow_fall_rate;
        snow_on_ground -= snow_on_ground * melt_proportion;
    }
    
    cout << snow_on_ground << endl;
    
    return 0;
}