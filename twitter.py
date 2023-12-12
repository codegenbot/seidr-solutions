```
def validate_tweet(tweet):
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet == '':
        return "You didn't type anything"
    elif not tweet.strip():
        return "Your tweet contains only whitespace characters"
    else:
        return f"Your tweet has {len(tweet)} characters"
```