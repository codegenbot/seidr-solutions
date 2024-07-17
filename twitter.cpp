#include <string>
using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    if (getline(cin, tweet)) { 
        if (tweet.length() > 140) {
            cout << "Too many characters" << endl;
        } else if (tweet.empty()) {
            cout << "You didn't type anything" << endl;
        } else {
            cout << "Your tweet has " << tweet.length() << " characters" << endl;
        }
    } else {
        cout << "Error: failed to read input." << endl; 
    }
    
    cin.get(); 
    return 0;
}