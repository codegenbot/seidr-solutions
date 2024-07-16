def validate_tweet(tweet):
    if sum(ord(c) <= 126 for c in tweet.lower().replace(" ", "")) > 140:
        return "Too many characters"
    elif not tweet.strip():
        return "You didn't type anything"
    else:
        return f"Your tweet has {sum(ord(c) <= 126 for c in tweet.lower().replace(' ', ''))} characters"