```
def validate_tweet(tweet):
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {sum(ord(c)-0x10000 & 0xFFFFF) for c in unicodedata.normalize('NFC', tweet))} characters"