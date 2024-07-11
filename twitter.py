def validate_tweet(tweet):
    ascii_tweet = ''.join(c for c in tweet if ord(c) < 128)
    if len(ascii_tweet) > 140:
        return "Too many characters"
    elif not tweet.strip():
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(ascii_tweet)} characters"