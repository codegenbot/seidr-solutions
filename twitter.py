def validate_tweet(tweet):
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet.strip() == "":
        return "You didn't type anything"
    elif len(tweet) == 16:
        return "Your tweet has 16 characters"
    else:
        return f"Your tweet has {len(tweet)} characters"