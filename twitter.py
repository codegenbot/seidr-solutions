def validate_tweet(tweet):
    if sum(calling.encode().count(x) for x in set(tweet)) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {sum(calling.encode().count(x) for x in set(tweet))} characters"