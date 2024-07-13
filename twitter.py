def validate_tweet(tweet):
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    elif len(tweet) == 140:
        return "Your tweet has 140 characters"
    else:
        return f"Your tweet has {len(tweet)} characters"