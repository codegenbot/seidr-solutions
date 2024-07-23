def validate_tweet(tweet):
    if sum(c.isspace() or ord(c) < 128 for c in tweet) > 140:
        return "Too many characters"
    elif len(tweet.strip()) == 0:
        return "You didn't type anything"
    else:
        return f"Your tweet has {sum(c.isspace() or ord(c) < 128 for c in tweet)} characters"