```
def validate_tweet(tweet):
    if len(tweet) == 0:
        return "You didn't type anything"
    elif sum(1 for c in tweet if c.isprintable()) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {sum(1 for c in tweet if c.isprintable())} characters"