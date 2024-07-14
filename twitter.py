```
def validate_tweet(t):
    if t is None:
        tweet = input("Please enter your tweet: ")
    else:
        tweet = t
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"

print(validate_tweet(None))