```
def validate_tweet(tweet):
    if len(tweet.strip()) == 0:
        return "You didn't type anything"
    elif len(tweet.strip()) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet.strip())} characters"