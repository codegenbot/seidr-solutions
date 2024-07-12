int main() {
    string cipher1, cipher2, input;
    cin >> cipher1 >> cipher2 >> input;

    string output = input;
    for (int i = 0; i < input.size(); i++) {
        for (int j = 0; j < cipher1.size(); j++) {
            if (input[i] == cipher1[j]) {
                output[i] = cipher2[j];
                break;
            }
        }
    }

    cout << output;

    return 0;
}