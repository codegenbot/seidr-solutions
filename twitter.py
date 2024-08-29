def validate_tweet(tweet):
    if sum(1 for c in tweet.encode('utf-8').decode('ascii', 'ignore')) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {sum(1 for c in tweet)} characters"