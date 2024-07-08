def validate_tweet(tweet):
    if not tweet:
        return "You didn't type anything"
    if any(not c.isprintable() for c in tweet):
        return "Your tweet contains non-printable characters"
    if len(tweet) > 140:
        return "Too many characters"
    return f"Your tweet has {len(tweet)} characters"