def validate_tweet(tweet):
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        non_spaces = sum(c.isalnum() for c in tweet)
        return f"Your tweet has {non_spaces} characters"