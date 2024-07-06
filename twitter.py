def validate_tweet(tweet):
    non_ascii_chars = sum(ord(c) > 127 for c in tweet)
    if len(tweet.encode('ascii', 'ignore').decode()) > 140 - non_ascii_chars:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"