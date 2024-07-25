```
def validate_tweet(tweet):
    elif not all(tweet[i].isalnum() or tweet[i] == ' ' for i in range(len(tweet))):
        return "You didn't type anything"
    elif len(''.join(char for char in tweet if char.isalnum() or char == ' ')) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(''.join(char for char in tweet if char.isalnum() or char == ' '))} characters"

print(validate_tweet("")) 
print(validate_tweet("1")) 
print(validate_tweet("max length tweet that just contains letters and spaces even SOME CAPITAL LETTERS just to MAKE it INTERESTING now repeeeeeeeeeEEEEEEEeeeat it")) 
print(validate_tweet("40172875*&(&(%^^*!@&#()!@&^(*$787031264123984721-43214876*%^#!(@^$_!@^%#$(!#@%$(01234")) 
print(validate_tweet("Tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooolong1"))