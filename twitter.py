def validate_tweet(tweet):
    alphanumeric_chars = ''.join(e for e in tweet if e.isalnum())
    if len(alphanumeric_chars) > 140:
        return "Too many characters"
    elif not alphanumeric_chars:
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(alphanumeric_chars)} characters"