int main() {
    string input;
    cin >> input;

    int length = input.size();
  
    if (length % 2 == 1) {
        cout << input[length/2];
    } else {
        cout << input.substr((length/2) - 1, 2);
    }

    return 0;
}