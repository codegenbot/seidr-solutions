def validate_tweet(tweet):
    tweet = tweet.strip().lower()
    if not tweet.isascii():
        ascii_chars = sum(1 for c in tweet if c.isascii())
        if len(tweet) - ascii_chars > 140:
            return "Too many characters"
        elif not tweet:
            return "You didn't type anything"
        else:
            return f"Your tweet has {len(tweet)-ascii_chars} characters"
    else:
        if len(tweet) > 140:
            return "Too many characters"
        elif not tweet:
            return "You didn't type anything"
        else:
            return f"Your tweet has {len(tweet)} characters"