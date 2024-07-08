import string

# Prompt user for input
tweet = input("Enter your tweet: ")


def validate_tweet(tweet):
    if not all(c in string.printable for c in tweet):
        return "Your tweet contains non-printable characters"
    elif len(tweet) > 140:
        return "Too many characters"
    elif tweet != "":
        return f"Your tweet has {len(tweet)} characters"
    else:
        return "You didn't type anything"


# Call validate_tweet function with user input
result = validate_tweet(tweet)
print(result)