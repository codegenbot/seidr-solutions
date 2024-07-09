Here is the Python solution for the problem:

```
def validate_tweet(tweet):
    if len(tweet) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"

# test cases
print(validate_tweet(""))  # You didn't type anything
print(validate_tweet("1"))  # Your tweet has 1 characters
print(validate_tweet(max_length_tweet))  # Your tweet has 140 characters
print(validate_tweet(long_tweet))  # Too many characters