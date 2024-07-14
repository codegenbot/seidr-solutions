```
import string

def validate_tweet(tweet):
    if len(tweet.replace(" ", "").translate(str.maketrans("", "", string.punctuation)).encode('ascii', 'ignore').decode().strip()) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet.replace(" ", "").translate(str.maketrans("", "", string.punctuation)).encode('ascii', 'ignore').decode().strip())} characters"