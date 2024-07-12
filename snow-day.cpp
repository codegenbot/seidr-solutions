int main() {
    int hours;
    while (!(cin >> hours)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input! Please enter a valid integer for the number of hours.\n";
    }