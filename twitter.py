import re
def validate_tweet(tweet):
    if len(re.sub(r'\W+', '', tweet.strip())) > 140:
        return "Too many characters"
    elif tweet.strip() == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(re.sub(r'\W+', '', tweet.strip()))} characters"