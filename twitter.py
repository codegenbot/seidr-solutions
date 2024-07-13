```
def validate_tweet(tweet):
    if len(unicode(tweet, 'utf-8').encode('ascii', 'ignore').decode('ascii')) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(unicode(tweet, 'utf-8').encode('ascii', 'ignore').decode('ascii'))} characters"