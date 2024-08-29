Here's a simple Python solution for this problem:

```python
def check_tweet_length(tweet):
    if len(tweet.strip()) == 0:
        return "You didn't type anything"
    elif len(tweet) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"

print(check_tweet_length(input()))