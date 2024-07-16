```cpp
#include <iostream>
#include <wstring>

std::wstring validateTweet(const std::wstring& tweet) {
    if (tweet.empty()) {
        return L"You didn't type anything";
    }
    
    if (tweet.length() > 140) {
        return L"Too many characters";
    }
    
    return L"Your tweet has " + std::to_wstring(tweet.length()) + L" characters";
}

int main() {
    // Test cases
    std::cout << validateTweet(L"") << std::wendl;
    std::cout << validateTweet(L"1") << std::wendl;
    std::cout << validateTweet(L"max length tweet that just contains letters and spaces even SOME CAPITAL LETTERS just to MAKE it INTERESTING now repeeeeeeeeeEEEEEEEeeeat it") << std::wendl;
    std::cout << validateTweet(L"40172875*&(&(%^^*!@&#()!@&^(*$787031264123984721-43214876*%^#!(@^$_!@^%#$(!#@%$(01234~~``)") << std::wendl;
    std::cout << validateTweet(L"Tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooolong1") << std::wendl;

    return 0;
}