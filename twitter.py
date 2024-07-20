import unicodedata

def validate_tweet(tweet):
    tweet = unicodedata.normalize('NFKD', tweet).encode('ascii', 'ignore').decode()
    tweet = tweet.strip()
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"