```
import re

def validate_tweet(tweet):
    if len(tweet) > 140:
        return "Too many characters"
    elif len(tweet) == 0:
        return "You didn't type anything"
    elif re.search(r'[\W\d]', tweet):
        return "Invalid character"
    else:
        return f"Your tweet has {len(tweet)} characters"
```