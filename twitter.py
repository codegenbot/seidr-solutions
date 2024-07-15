import unicodedata

def validate_tweet(tweet):
    if len(tweet) == 0:
        return "You didn't type anything"
    elif len(unicodedata.normalize('NFD', tweet).encode('ascii', 'ignore').decode('ascii')) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(unicodedata.normalize('NFD', tweet).encode('ascii', 'ignore').decode('ascii'))} characters"