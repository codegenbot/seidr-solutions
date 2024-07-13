int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltingRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltingRate;

    for (int i = 0; i < hours; ++i) {
        snowOnGround += snowFallRate;
        snowOnGround *= (1 - snowMeltingRate);
    }

    cout << snowOnGround << endl;

    return 0;
}