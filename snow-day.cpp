int main() {
    int hours;
    float snow, snow_fall_rate, melt_rate;
    cin >> hours >> snow >> snow_fall_rate >> melt_rate;
    
    for(int i = 0; i < hours; ++i) {
        snow += snow_fall_rate;
        snow -= snow * melt_rate;
        if(snow < 0) snow = 0;
    }
    
    cout << snow << endl;
    
    return 0;
}