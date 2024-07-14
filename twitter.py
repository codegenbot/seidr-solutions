```
def validate_tweet(tweet):
    tweet = tweet.replace(" ", "").translate(str.maketrans("", "", string.punctuation)).strip()
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"