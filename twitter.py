def validate_tweet(tweet):
    tweet = tweet.encode('utf-8').decode().strip()
    if not tweet:
        "You didn't type anything"
    elif len(tweet) > 140:
        "Too many characters"
    else:
        f"Your tweet has {len(tweet)} characters"