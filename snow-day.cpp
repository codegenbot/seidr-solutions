int main() {
    int hours;
    float snow, snowFall, snowMelt;
    cin >> hours >> snow >> snowFall >> snowMelt;
    
    for (int i = 0; i < hours; ++i) {
        snow += snowFall;
        snow -= snow * snowMelt;
    }
    
    cout << snow << endl;
    
    return 0;
}