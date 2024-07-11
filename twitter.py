```
def validate_tweet(tweet):
    if len(tweet.strip()) == 0:
        return "You didn't type anything"
    tweet = ''.join(e for e in tweet if e.isalnum() or e.isspace())
    if len(tweet) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"