```
def validate_tweet(tweet):
    tweet = tweet.encode('utf-8').decode('utf-8')
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"