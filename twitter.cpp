string tweet;
cout << "Enter a tweet: ";
cin.ignore();
cin.ignore(); 
getline(cin, tweet);
cout << validateTweet(tweet) << endl;
return 0;