```
def validate_tweet(tweet):
    if sum(c>= '\x20' for c in tweet) > 140:
        return "Too many characters"
    elif not tweet:
        return "You didn't type anything"
    else:
        return f"Your tweet has {sum(c>= '\x20' for c in tweet)} characters"