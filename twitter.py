def validate_tweet(tweet):
    if len(tweet) > 140:
        return "Too many characters"
    elif not tweet:
        return "You didn't type anything"
    else:
        non_alphanum_count = sum(not c.isalnum() for c in tweet)
        return f"Your tweet has {len(tweet) - non_alphanum_count} characters"