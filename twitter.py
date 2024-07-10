import re

def validate_tweet(tweet):
    if len(re.sub(r'\W+', '', tweet)) > 140:
        return "Too many characters"
    elif not tweet:
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"