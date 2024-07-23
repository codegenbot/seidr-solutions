def validate_tweet(tweet):
    if len(tweet.replace(" ", "").replace(",", "").replace(".", "").replace("!","").replace("?","").isalnum()) > 140:
        return "Too many characters"
    elif len(tweet.strip()) == 0:
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"