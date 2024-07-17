```
def validate_tweet(tweet):
    if len(tweet.decode('utf-8', 'replace').encode()) > 140:
        return "Too many characters"
    elif tweet == b"":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet.decode('utf-8', 'replace'))} characters"