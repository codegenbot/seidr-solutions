Here is the Python code to solve the problem:

```
def validate_tweet(t):
    if len(t) > 140:
        return "Too many characters"
    elif t == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(t)} characters"

# Testing the function
print(validate_tweet(""))  # You didn't type anything
print(validate_tweet("1"))  # Your tweet has 1 characters
print(validate_tweet("max length tweet that just contains letters and spaces even SOME CAPITAL LETTERS just to MAKE it INTERESTING now repeeeeeeeeeEEEEEEEeeeat it"))  # Your tweet has 140 characters
print(validate_tweet("40172875*&(&(%^^*!@&#()!@&^(*$787031264123984721-43214876*%^#!(@^$_!@^%#$(!#@%$(01234~~``))  # Your tweet has 90 characters
print(validate_tweet("Tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooolong1"))  # Too many characters