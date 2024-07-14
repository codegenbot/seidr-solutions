def validate_tweet(t=None):
    if t is None:
        t = input("Please enter your tweet: ")
    if len(t) > 140:
        return "Too many characters"
    elif t == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(t)} characters"

print(validate_tweet())