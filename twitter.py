import sys

def validate_tweet(tweet):
    if len(tweet.encode(sys.getdefaultencoding(), 'replace').decode().encode('utf-8')) > 140:
        return "Too many characters"
    elif not tweet.strip():
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"