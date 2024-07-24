#include <string>
#include <limits>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, tweet);
    if(tweet.empty()) {
        cout << "You didn't type anything" << endl;
        return 0; 
    }
    tweet.erase(tweet.find_last_not_of("\n") + 1);
    if (tweet.length() > 140) {
        cout << "Too many characters" << endl;
    } else {
        cout << "Your tweet has " << tweet.length() << " characters" << endl;
    }
}