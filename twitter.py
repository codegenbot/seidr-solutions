```
import re

def validate_tweet(tweet):
    if len(tweet.strip()) > 140:
        return "Too many characters"
    elif not tweet.strip():
        return "You didn't type anything"
    else:
        if re.match('^[a-zA-Z0-9\s\(\)\*\-\.\,\'\"\/\_\|\=\+\$\%\+\[\]\{\}]+$', tweet):
            return f"Your tweet has {len(tweet)} characters"
        else:
            return "Too many special characters"

print(validate_tweet(""))
print(validate_tweet("1"))
print(validate_tweet("max length tweet that just contains letters and spaces even SOME CAPITAL LETTERS just to MAKE it INTERESTING now repeeeeeeeeeEEEEEEEeeeat it"))
print(validate_tweet("40172875*&(&(%^^*!@&#()!@&^(*$787031264123984721-43214876*%^#!(@^$_!@^%#$(!#@%$(01234~~``)")
print(validate_tweet("Tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooolong1"))