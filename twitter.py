def validate_tweet(t):
    if len(t) == 0:
        return "You didn't type anything"
    elif len(t) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(t)} characters"