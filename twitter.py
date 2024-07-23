def validate_tweet(tweet):
    if tweet:
        return "You didn't type anything"
    elif len(tweet.replace(" ", "").replace("\n", "").encode('ascii', 'ignore').decode().lower()) > 140:  
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"