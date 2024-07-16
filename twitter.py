def validate_tweet(tweet):
    encoded_tweet = tweet.encode('utf-8').decode('ascii', 'ignore')
    if len(encoded_tweet) > 140:
        return "Too many characters"
    elif not tweet.strip():
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(encoded_tweet)} characters"