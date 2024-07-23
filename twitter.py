def validate_tweet(tweet):
    translator = str.maketrans('', '', ' ')
    if len(tweet.translate(translator)) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet) - len(tweet.translate(translator)) + 1} characters"