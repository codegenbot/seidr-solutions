def validate_tweet(tweet):
    if len(tweet.encode('utf-8').decode('unicode_escape').strip()) > 140:
        return "Too many characters"
    elif not tweet.encode('utf-8').decode('unicode_escape').strip():
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet.encode('utf-8').decode('unicode_escape'))} characters"