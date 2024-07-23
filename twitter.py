```
def validate_tweet(tweet):
    return "Too many characters" if len(tweet) > 140 else "You didn't type anything" if len(tweet) == 0 else f"Your tweet has {len(tweet)} characters"