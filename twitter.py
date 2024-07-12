```
import re

def validate_tweet(tweet):
    if len(re.sub(r'\W+', '', tweet)) == 0:
        return "You didn't type anything"
    elif len(re.sub(r'\W+', '', tweet)) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"