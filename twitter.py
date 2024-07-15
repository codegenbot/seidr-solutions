def validate_tweet(tweet):
    if not tweet:
        return "You didn't type anything"
    elif unicodedata.normalize("NFD", tweet).encode("ascii", "ignore").decode().count("\0") > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"