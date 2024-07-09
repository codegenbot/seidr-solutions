def validate_tweet(tweet):
    alphanum_chars = ''.join(e for e in tweet if e.isalnum())
    non_alphanum_chars = len(tweet) - len(alphanum_chars)
    if len(tweet) > 140:
        return "Too many characters"
    elif not tweet.strip():
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} ({non_alphanum_chars}) characters"

print(validate_tweet("")) 
print(validate_tweet("1")) 
print(validate_tweet("max length tweet that just contains letters and spaces even SOME CAPITAL LETTERS just to MAKE it INTERESTING now repeeeeeeeeeEEEEEEEeeeat it"))
print(validate_tweet("*(&(%^^*!@&#()!@&^(*$787031264123984721-43214876*%^#!(@^$_!@^%#$(!#@%$(01234~~```)"))
print(validate_tweet("Tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooolong1"))