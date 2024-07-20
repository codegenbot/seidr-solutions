```
import unicodedata

def validate_tweet(tweet):
    norm_tweet = unicodedata.normalize('NFC', tweet)
    if len(norm_tweet) > 140:
        return "Too many characters"
    elif norm_tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(norm_tweet)} characters"

tweet = input("Enter your tweet: ")
print(validate_tweet(tweet))