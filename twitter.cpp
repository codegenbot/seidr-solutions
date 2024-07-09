while(true) {
        std::string tweet;
        std::cout << "Enter a tweet: ";
        if (!(std::getline(std::cin, tweet))) break; 
        std::string result = validateTweet(tweet);
        std::cout << result << std::endl;
    }
    return 0;
}