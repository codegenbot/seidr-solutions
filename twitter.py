def validate_tweet(tweet):
    tweet = tweet.strip().replace('\x00', '').replace(',', '')
    if len(tweet.encode('utf-8').decode('ascii', 'ignore').encode('ascii').decode()) > 140:
        return "Too many characters"
    elif not tweet:
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet.encode('utf-8').decode('ascii', 'ignore').encode('ascii').decode())} characters"