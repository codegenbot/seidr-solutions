```
def validate_tweet(tweet):
    tweet = ''.join(e for e in tweet if e.isprintable())
    if len(tweet) > 140:
        return "Too many characters"
    elif len(tweet) == 0:
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"