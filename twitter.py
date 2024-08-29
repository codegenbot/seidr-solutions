```
def validate_tweet(tweet):
    if len(tweet) == 0:
        return "You didn't type anything"
    elif sum(c.isalnum() for c in tweet) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {sum(c.isalnum() for c in tweet)} characters"