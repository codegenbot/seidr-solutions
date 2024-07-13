def check_tweet_length(tweet):
    if not tweet:
        return "You didn't type anything"
    if len(tweet) > 140:
        return "Too many characters"
    return f"Your tweet has {len(tweet)} characters"