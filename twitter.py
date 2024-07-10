def validate_tweet(tweet):
    tweet = tweet.encode('utf-8').encode().decode("latin1").encode().decode("ascii", "ignore")
    if len(tweet.strip()) > 140:
        return "Too many characters"
    elif not tweet.strip():
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet.strip())} characters"