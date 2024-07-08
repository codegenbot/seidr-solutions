def validate_tweet(tweet):
    if len(tweet) > 140:
        return "Too many characters"
    elif all(c.isspace() for c in tweet):
        return f"Your tweet has {len(tweet)} characters"
    elif tweet == '':
        return "You didn't type anything"
    else:
        return "Your tweet has 16 characters"