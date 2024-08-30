Here is the solution in Python:

def validate_tweet(t):
    if len(t) > 140:
        return "Too many characters"
    elif len(t) == 0:
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(t)} characters"

# Test cases
print(validate_tweet("")) # Should print: You didn't type anything
print(validate_tweet("1")) # Should print: Your tweet has 1 characters
print(validate_tweet("max length tweet that just contains letters and spaces even SOME CAPITAL LETTERS just to MAKE it INTERESTING now repeeeeeeeeeEEEEEEEeeeat it")) # Should print: Your tweet has 140 characters
print(validate_tweet("40172875*&(&(%^^*!@&#()!@&^(*$787031264123984721-43214876*%^#!(@^$_!@^%#$(!#@%$(01234~~``")) # Should print: Your tweet has 90 characters
print(validate_tweet("Tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooolong1")) # Should print: Too many characters