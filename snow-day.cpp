int main() {
    int hours;
    float snow, snow_fall, melt_rate;
    cin >> hours >> snow >> snow_fall >> melt_rate;
    
    for (int i = 0; i < hours; ++i) {
        snow += snow_fall;
        snow -= melt_rate * snow;
    }
    
    cout << snow << endl;
    
    return 0;
}