import re
def validate_tweet(tweet):
    tweet = re.sub('[^A-Za-z0-9]', '', tweet) # remove all non-alphanumeric characters
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet != "":
        return f"Your tweet has {len(tweet)} characters"
    else:
        return "You didn't type anything"