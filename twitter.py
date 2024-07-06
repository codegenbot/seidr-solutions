def validate_tweet(tweet):
    if not all(ord(c) < 128 for c in tweet):  
        return "Too many characters"
    elif len(tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"