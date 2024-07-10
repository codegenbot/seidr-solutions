def validate_tweet(tweet):
    if sum(coderange(ord(c)) for c in tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"