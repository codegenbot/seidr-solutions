int main() {
    int hours;
    float snowOnGround, rateOfSnowFall, snowMeltingRate;
    cin >> hours >> snowOnGround >> rateOfSnowFall >> snowMeltingRate;
    
    for (int i = 0; i < hours; ++i) {
        snowOnGround += rateOfSnowFall;
        snowOnGround = snowOnGround - (snowOnGround * snowMeltingRate);
    }
    
    cout << snowOnGround << endl;
    
    return 0;
}