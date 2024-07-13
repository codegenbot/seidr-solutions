int main() {
    int hours;
    float snow, snowFall, snowMelting;
    cin >> hours >> snow >> snowFall >> snowMelting;
    
    for (int i = 0; i < hours; ++i) {
        snow += snowFall;
        snow -= snow * snowMelting;
    }
    
    cout << snow << endl;
    
    return 0;
}