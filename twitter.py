def validate_tweet(tweet):
    if len(tweet.replace(" ", "").replace("\n", "").encode('ascii', 'ignore').decode().lower()) > 140:
        return "Too many characters"
    elif tweet.strip() == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"