def tweet_validator(tweet):
    if len(tweet) == 0:
        return "You didn't type anything"
    elif len(tweet) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"


# Testing the function
print(tweet_validator(""))  # You didn't type anything
print(tweet_validator("1"))  # Your tweet has 1 characters
print(
    tweet_validator(
        "max length tweet that just contains letters and spaces even SOME CAPITAL LETTERS just to MAKE it INTERESTING now repeeeeeeeeeEEEEEEEeeeat it"
    )
)  # Your tweet has 140 characters
print(
    tweet_validator(
        "40172875*&(&(%^^*!@&#()!@&^(*$787031264123984721-43214876*%^#!(@^$_!@^%#$(!#@%$(01234~~``"
    )
)  # Your tweet has 90 characters
print(
    tweet_validator(
        "Tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooolong1"
    )
)  # Too many characters