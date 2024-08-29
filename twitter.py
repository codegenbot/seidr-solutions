def validate_tweet(tweet):
    if not tweet.strip():
        return "You didn't type anything"
    elif len(tweet) > 140 or any(not c.isalnum() for c in tweet):
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"