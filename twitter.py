```
def validate_tweet(tweet):
    tweet = "".join(char for char in tweet if char.isalnum())
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"