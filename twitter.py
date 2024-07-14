Here is the solution:

def validate_tweet(tweet):
    if len(tweet) == 0:
        return "You didn't type anything"
    elif len(tweet) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"