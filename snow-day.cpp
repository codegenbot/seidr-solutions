int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;

    float snow = snowOnGround;
    
    for (int i = 0; i < hours; ++i) {
        snow += snowFallRate;
        snow -= snow * snowMeltRate;
        if (snow < 0) {
            snow = 0;
        }
    }

    cout << snow << endl;

    return 0;
}