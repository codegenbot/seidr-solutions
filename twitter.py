```
def validate_tweet(tweet):
    if len(tweet.strip()) == 0:
        return "You didn't type anything"
    elif len(tweet) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"

print(validate_tweet("")) 
print(validate_tweet("1")) 
print(validate_tweet("max length tweet that just contains letters and spaces even SOME CAPITAL LETTERS just to MAKE it INTERESTING now repeeeeeeeeeEEEEEEEeeeat it")) 
print(validate_tweet("40172875*&\(\(%\^\*\!@\#\( \@&^*\$\787031264123984721-43214876\*%!\(\@^$_!\@^%\#$\(\@%$\\(01234~~``))")) 
print(validate_tweet("Tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooolong1")) 
print(validate_tweet("KW?~+G{4?F3vU!BPCUe*~Dt0WW)UsTQ99lb,"))