std::string input;
    while (true) {
        std::cout << "Enter a tweet: ";
        std::getline(std::cin, input);
        if(input.length() == 0) break; 
        std::cout << validateTweet(input) << std::endl;
    }
    return 0;
}