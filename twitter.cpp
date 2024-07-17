```c++
#include <iostream>
#include <string>

using namespace std;

int validateTweet(string tweet) {
    if (tweet.empty()) {
        return 0;
    } else if (tweet.length() > 140) {
        return -1;
    } else {
        return tweet.length();
    }
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    
    int result = validateTweet(tweet);
    
    if(result == 0) 
        cout << "You didn't type anything" << endl;
    else if (result == -1)
        cout << "Too many characters" << endl;
    else
        cout << "Your tweet has " << result << " characters" << endl;
    
    return 0;
}