```
def validate_tweet(tweet):
    ascii_len = sum(1 for c in tweet if ord(c) < 128)
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    elif ascii_len + (len(tweet) - ascii_len) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"