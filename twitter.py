```
import re

def validate_tweet(tweet):
    if len(re.sub(r'\s+', '', tweet)) > 140:
        return "Too many characters"
    elif not tweet.strip():
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(re.sub(r'\s+', '', tweet))} characters"