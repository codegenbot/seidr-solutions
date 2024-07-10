```
def validate_tweet(tweet):
    if tweet.encode('utf-8').decode().count("\n") > 0:
        return "You didn't type anything"
    if len(tweet) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"