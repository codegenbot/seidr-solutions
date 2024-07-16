def validate_tweet(tweet):
    if len(tweet) > 145:
        return "Too many characters"
    elif not tweet.strip():
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"