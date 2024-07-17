```
def validate_tweet(tweet):
    encoded_tweet = tweet.encode('utf-8')
    if len(encoded_tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet.encode('ascii', 'ignore').decode().encode('utf-16le'))} characters"