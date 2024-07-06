def validate_tweet(tweet):
    if not tweet.strip(): 
        return "You didn't type anything"
    elif len(tweet.replace(" ", "")) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"