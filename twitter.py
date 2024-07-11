```
def validate_tweet(tweet):
    tweet = ''.join(filter(str.isalnum, tweet)).lower()
    if len(tweet) > 140:
        return "Too many characters"
    elif not tweet:
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"