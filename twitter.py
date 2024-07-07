import re


def validate_tweet(tweet):
    pattern = r"^[a-zA-Z0-9 ]+$"  # only allow alphanumeric and spaces
    if not re.match(pattern, tweet):
        return "Your tweet contains invalid characters"
    tweet = tweet.strip()
    if len(tweet) > 140:
        return "Too many characters"
    elif len(tweet) == 0:
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"