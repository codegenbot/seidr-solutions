```
def validate_tweet(tweet):
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        non_alphabetic_count = sum(not c.isalpha() for c in tweet)
        return f"Your tweet has {len(tweet) - non_alphabetic_count} characters"