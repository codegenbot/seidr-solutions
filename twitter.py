allowed_chars = " !@#$%^&*()_+-={}:;<>?,.<\/|\\[]{}"

def validate_tweet(tweet):
    if len(tweet.replace(" ", "").replace(allowed_chars, "")) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"