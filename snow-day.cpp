int main() {
    int hours;
    float snowGround, snowFall, snowMelt;
    cin >> hours >> snowGround >> snowFall >> snowMelt;

    for (int i = 0; i < hours; ++i) {
        snowGround += snowFall;
        snowGround *= (1 - snowMelt);
    }

    cout << snowGround << endl;

    return 0;
}