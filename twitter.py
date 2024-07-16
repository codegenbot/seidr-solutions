```
def validate_tweet(tweet):
    tweet = ''.join(format(ord(x), '#04x') for x in tweet)
    if len(tweet) > 140:
        return "Too many characters"
    elif not tweet:
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"