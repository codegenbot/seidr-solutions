def validate_tweet(tweet):
    if len(unicodedecoder.decode(tweet)) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(unicodedecoder.decode(tweet))} characters"