```
def validate_tweet(tweet):
    if len(tweet.strip()) == 0:
        return "You didn't type anything"
    elif len(tweet.encode('utf-8').decode().encode('ascii', 'ignore').strip()) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"