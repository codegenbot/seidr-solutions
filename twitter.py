```
def validate_tweet(tweet):
    tweet = tweet.strip().encode('utf-8').decode().lower()
    if len(tweet.replace(' ', '')) > 140:
        return "Too many characters"
    elif not tweet:
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet.replace(' ', ''))} characters"