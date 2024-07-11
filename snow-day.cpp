int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltingProp;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltingProp;

    for (int i = 0; i < hours; ++i) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * snowMeltingProp;
    }

    cout << snowOnGround << endl;
    
    return 0;
}