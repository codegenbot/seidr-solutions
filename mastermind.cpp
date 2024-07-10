int main() {
    string code, guess;
    int numBlackPegsResult, numWhitePegsResult;
    cin >> code >> guess;
    numBlackPegsResult = numBlackPegs(code, guess);
    cout << numWhitePegs(code, guess) << endl;
    cout << numBlackPegsResult << endl;
    return 0;
}