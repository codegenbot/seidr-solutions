```
def validate_tweet(tweet):
    if len(tweet) == 0:
        "You didn't type anything"
    elif len(tweet) > 140:
        "Too many characters"
    else:
        f"Your tweet has {len(tweet)} characters"