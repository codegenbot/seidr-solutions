string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << "Your tweet has " << validateTweet(tweet) << " characters" << endl;
}