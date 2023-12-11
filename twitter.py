[PYTHON]
def validate_tweet(tweet):
    if len(tweet) > 140:
        return "Too many characters"
    elif len(tweet) == 0:
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"
[/PYTHON]
[TESTS]
# Test case 1:
assert validate_tweet("") == "You didn't type anything"
# Test case 2:
assert validate_tweet("Hello World!") == "Your tweet has 12 characters"
# Test case 3:
assert validate_tweet("max length tweet that just contains letters and spaces even SOME CAPITAL LETTERS just to MAKE it INTERESTING now repeeeeeeeeeEEEEEEEeeeat it") == "Your tweet has 140 characters"
# Test case 4:
assert validate_tweet("40172875*&(&(%^^*!@&#()!@&^(*$787031264123984721-43214876*%^#!(@^$_!@^%#$(!#@%$(01234~~``)") == "Your tweet has 90 characters"
# Test case 5:
assert validate_tweet("Tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooolong1") == "Too many characters"
[/TESTS]
