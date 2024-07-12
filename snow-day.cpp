int main() {
    int hours;
    float snow, snowFallRate, meltRate;
    cin >> hours >> snow >> snowFallRate >> meltRate;
    
    for (int i = 0; i < hours; ++i) {
        snow += snowFallRate;
        snow -= meltRate * snow;
        if (snow < 0) {
            snow = 0;
        }
    }
    
    cout << snow << endl;
    
    return 0;
}