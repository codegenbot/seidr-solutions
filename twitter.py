def validate_tweet(tweet):
    tweet = ''.join(e for e in tweet if e.isalnum() or e.isspace())
    if len(tweet) > 140:
        return "Too many characters"
    elif not tweet.strip():
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"