import unicodedata

def validate_tweet(tweet):
    tweet = ''.join(c for c in unicodedata.normalize('NFD', tweet) if unicodedata.category(c) != 'Mn')
    if len(tweet) > 140:
        return "Too many characters"
    elif not tweet.strip():
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"