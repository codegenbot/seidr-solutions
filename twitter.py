def validate_tweet(tweet):
    ascii_tweet = tweet.encode('ascii', 'ignore')
    if len(ascii_tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(ascii_tweet)} characters"