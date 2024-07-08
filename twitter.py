import string


def validate_tweet(tweet):
    if not all(c in string.printable for c in tweet):
        return "Your tweet contains non-printable characters"
    elif len(tweet) > 140:
        return "Too many characters"
    elif tweet != "":
        return f"Your tweet has {len(tweet)} characters"
    else:
        return "You didn't type anything"


if __name__ == "__main__":
    tweet = input("Enter your tweet: ")
    result = validate_tweet(tweet)
    print(result)