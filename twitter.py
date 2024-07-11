```
f"Your tweet has {len(tweet.replace('\W+', ''))} characters" if len(tweet) <= 140 else "Too many characters" if len(tweet) > 140 else "You didn't type anything"