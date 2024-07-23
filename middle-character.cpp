std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);

    std::cout << "The middle character(s) is/are: " << middleCharacter(input);
    return 0;
}