```
def validate_tweet(tweet):
    ascii_chars = sum(ord(char) <= 127 for char in tweet)
    non_ascii_chars = len(tweet) - ascii_chars
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    elif non_ascii_chars > 20:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"