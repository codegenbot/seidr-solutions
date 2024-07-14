```
import re

def validate_tweet(tweet):
    tweet = re.sub(r'[^a-zA-Z0-9\s]', '', tweet)  
    if len(tweet.strip()) > 140:
        return "Too many characters"
    elif tweet.strip() == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet.strip())} characters"