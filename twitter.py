def validate_tweet(tweet):
    tweet = ''.join(char for char in tweet if char.isalnum() or char.isspace())
    if len(tweet.strip()) == 0:
        return "You didn't type anything"
    elif len(tweet) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"