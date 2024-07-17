def validate_tweet(tweet):
    if sum(1 for c in tweet.encode()) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"