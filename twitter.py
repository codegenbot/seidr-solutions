```
def validate_tweet(tweet):
    if not tweet:
        return "You didn't type anything"
    elif len(tweet.encode('ascii', 'ignore').decode().replace('\n','')) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet.replace('\n',''))} characters"