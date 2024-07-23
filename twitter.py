def validate_tweet(tweet):
    if len(tweet.encode('utf-8').decode().encode('ascii', 'ignore').count('\0')) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"