def validate_tweet(tweet):
    if len(unicode_escape(tweet).encode('ascii', 'replace').decode()) > 140:
        return "Too many characters"
    elif not tweet.strip():
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"