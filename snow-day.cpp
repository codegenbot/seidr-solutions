int main() {
    int hours;
    float snowAmount, snowFall, snowMeltingRate;
    cin >> hours >> snowAmount >> snowFall >> snowMeltingRate;
    
    for (int i = 0; i < hours; ++i) {
        snowAmount += snowFall;
        snowAmount -= snowAmount * snowMeltingRate;
    }

    cout << snowAmount << endl;
    
    return 0;
}