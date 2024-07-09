def validate_tweet(tweet):
    if len(tweet) > 140 - len(tweet.encode('ascii', 'ignore').decode()):
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"