```
def validate_tweet(tweet):
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        words = tweet.split()
        url_count = sum(word.startswith('http') for word in words)
        user_count = sum(word.startswith('@') for word in words)
        chars_left = 140 - (len(tweet) - 2 * (url_count + user_count))
        return f"Your tweet has {len(tweet)} characters ({chars_left} left)"