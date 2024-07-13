int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltingProportion;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltingProportion;

    for (int i = 0; i < hours; ++i) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltingProportion;
    }

    cout << snowOnGround << endl;

    return 0;
}