def validate_tweet(tweet):
    if len(tweet.encode('utf-8').decode().replace("\n", "").replace(" ", "")) > 140:
        return "Too many characters"
    elif not tweet:
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet.encode('utf-8').decode().replace("\n", "").replace(" ", ""))} characters"