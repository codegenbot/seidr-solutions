def validate_tweet(tweet):
    if not tweet:
        return "You didn't type anything"
    elif len(tweet.encode('utf8').decode('utf8')) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet.encode('utf8').decode('utf8'))} characters"