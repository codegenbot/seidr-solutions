def validate_tweet(tweet):
    if not tweet:
        return "You didn't type anything"
    elif len(unicodedata.normalize('NFD', tweet.encode('ascii', 'ignore').decode())) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(unicodedata.normalize('NFD', tweet.encode('ascii', 'ignore').decode()))} characters"