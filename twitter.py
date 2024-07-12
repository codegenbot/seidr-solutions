def validate_tweet(tweet):
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        non_alphanumeric_chars = sum(1 for c in tweet if not c.isalnum())
        return f"Your tweet has {len(tweet) - non_alphanumeric_chars} characters"