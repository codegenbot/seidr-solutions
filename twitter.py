```
def validate_tweet(tweet):
    return "Too many characters" if len(tweet.encode('utf-16-be', 'surrogatepass').decode().encode('latin1')) > 140 else ("You didn't type anything" if not tweet.strip() else f"Your tweet has {len(tweet)} characters")