def validate_tweet(tweet):
    if len(tweet) > 140:
        return "Too many characters"
    if tweet.strip() != "":
        return f"Your tweet has {len(tweet)} characters"
    else:
        return "You didn't type anything"