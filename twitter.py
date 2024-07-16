import re

def validate_tweet(tweet):
    tweet = re.sub(r'\W+', '', tweet)
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"

print(validate_tweet(""))