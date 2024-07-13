int main() {
    string input;
    while (true) {
        cout << "Enter a tweet: ";
        if (!(cin >> ws).fail()) break;  
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        getline(cin, input);
        cout << validateTweet(input) << endl;
    }
    return 0;
}