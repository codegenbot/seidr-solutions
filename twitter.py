```
def validate_tweet(tweet):
    tweet = ''.join(c for c in tweet.encode('ascii', 'ignore').decode())
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"