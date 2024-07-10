int main() {
    int hours;
    float snowOnGround, rateOfSnowFall, proportionOfMelting;
    cin >> hours >> snowOnGround >> rateOfSnowFall >> proportionOfMelting;
    
    for (int i = 0; i < hours; i++) {
        snowOnGround += rateOfSnowFall;
        snowOnGround *= (1.0 - proportionOfMelting);
    }
    
    cout << snowOnGround << endl;
    
    return 0;
}