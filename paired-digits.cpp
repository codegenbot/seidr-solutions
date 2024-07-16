int main() {
    string num;
    cin >> num;
    
    int sum = 0;
    for (int i = 0; i < num.size() - 1; ++i) {
        if (num[i] == num[i + 1]) {
            sum += num[i] - '0';
        }
    }
    
    cout << sum << endl;
    
    return 0;
}