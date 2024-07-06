```
def validate_tweet(tweet):
    if sum(c >= 128 for c in tweet.encode('ascii', 'ignore')) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"