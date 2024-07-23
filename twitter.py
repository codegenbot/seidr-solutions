def validate_tweet(tweet):
    if len(re.sub(r'\W+', '', tweet)) > 140:
        return "Too many characters"
    elif len(tweet) == 0:
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"