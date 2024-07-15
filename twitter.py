```
import unicodedata

def validate_tweet(tweet):
    if not tweet:
        return "You didn't type anything"
    elif len(unicodedata.normalize('NFKD', tweet).encode('ascii', 'ignore')) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"