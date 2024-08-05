int whitePegs(int a[], int b[]) {
    int count = 0;
    for (int i = 0; i < 6; i++) {
        if ((a[i] == 1 && b[i] == 0) || (a[i] == 0 && b[i] == 1)) {
            count++;
        }
    }
    return count;
}

int blackPegs(int a[], int b[]) {
    int count = 0;
    for (int i = 0; i < 6; i++) {
        if (a[i] == b[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;

    vector<char> a(4), b(4);

    for (int i = 0; i < 4; i++) {
        if (code[i] == 'B') a[i] = 1; else if (code[i] == 'O') a[i] = 2;
        else if (code[i] == 'G') a[i] = 3; else if (code[i] == 'Y') a[i] = 4;
        else if (code[i] == 'W') a[i] = 5;

        if (guess[i] == 'B') b[i] = 1; else if (guess[i] == 'O') b[i] = 2;
        else if (guess[i] == 'G') b[i] = 3; else if (guess[i] == 'Y') b[i] = 4;
        else if (guess[i] == 'W') b[i] = 5;
    }

    int whitePegsCount = whitePegs(a, b);
    int blackPegsCount = blackPegs(a, b);

    cout << blackPegsCount << endl;
    cout << whitePegsCount << endl;

    return 0;
}