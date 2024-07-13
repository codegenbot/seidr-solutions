def validate_tweet(tweet):
    ascii_chars = sum(ord(c) <= 126 for c in tweet)
    if len(tweet.strip()) > 140:
        return "Too many characters"
    elif tweet.strip() == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {ascii_chars} characters"