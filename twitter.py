[PYTHON]
def validate_tweet(tweet):
    if len(tweet) == 0:
        return "You didn't type anything"
    elif len(tweet) > 140:
        return "Too many characters"
    else:
        return "Your tweet has {} characters".format(len(tweet))
[/PYTHON]
[TESTS]
# Test case 1:
assert validate_tweet("") == "You didn't type anything"
# Test case 2:
assert validate_tweet("a" * 140) == "Your tweet has 140 characters"
# Test case 3:
assert validate_tweet("a" * 90) == "Your tweet has 90 characters"
# Test case 4:
assert validate_tweet("a" * 141) == "Too many characters"
# Test case 5:
assert validate_tweet("a" * 40 + " " + "a" * 40) == "Your tweet has 80 characters"
[/TESTS]
