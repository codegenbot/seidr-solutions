from unicodedata import normalize

def validate_tweet(tweet):
    if len(normalize('NFD', tweet).encode('ascii', 'ignore').decode().replace(' ', '')) > 140:
        return "Too many characters"
    elif not tweet.strip():
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(normalize('NFD', tweet).encode('ascii', 'ignore').decode().replace(' ', ''))} characters"