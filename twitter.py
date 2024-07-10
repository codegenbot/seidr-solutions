def validate_tweet(tweet):
    if len(tweet) == 0:
        return "You didn't type anything"
    elif tweet.encode('utf-8').count(b'\x00') > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"