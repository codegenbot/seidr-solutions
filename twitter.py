Here is the modified code:

print( "Your tweet has {len(tweet)} characters" )
def validate_tweet(tweet):
    if len(tweet) > 140:
        return "Too many characters"
    elif len(tweet) == 0:
        return "You didn't type anything"
    else:
        return "Your tweet has {} characters".format(len(tweet))

print(validate_tweet(" "))
print(validate_tweet("1"))
print(validate_tweet("max length tweet that just contains letters and spaces even SOME CAPITAL LETTERS just to MAKE it INTERESTING now repeeeeeeeeeEEEEEEEeeat it"))
print(validate_tweet("40172875*\\(&\\,%^^*!@#\\$787031264123984721-43214876*%^#!(@^$_!@^%#$(!#@%$(01234~~"))
print(validate_tweet("Tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooolong1"))