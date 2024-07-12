int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    
    for (int i = 0; i < hours; ++i) {
        snowOnGround = snowOnGround + snowFallRate - snowOnGround * snowMeltRate;
    }

    cout << snowOnGround << endl;

    return 0;
}