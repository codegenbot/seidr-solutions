Here's the completed code:

def validate_tweet(t):
    if len(t) > 140:
        return "Too many characters"
    elif len(t) == 0:
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(t)} characters"