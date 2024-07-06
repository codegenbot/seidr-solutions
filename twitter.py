def validate_tweet(tweet):
    if len(tweet) > 140:
        return "Too many characters"
    tweet = ''.join(filter(str.isalnum, tweet))
    if not tweet:
        return "You didn't type anything"
    return f"Your tweet has {len(tweet)} characters"