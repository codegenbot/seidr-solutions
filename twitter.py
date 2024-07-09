def validate_tweet(tweet):
    if len(tweet) > 140 or any(c.isspace() for c in tweet):
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet) - tweet.count(' ')} characters"