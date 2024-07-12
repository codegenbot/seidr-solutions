def validate_tweet(tweet):
    tweet = tweet.encode('utf-8').decode().strip()
    if not tweet:
        return "You didn't type anything"
    elif len(tweet) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"