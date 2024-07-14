```
def validate_tweet():
    tweet = input("Please type your tweet: ")
    if tweet == 'y-7JK,?"^:b7Go[`hLA<'TS7oy?6wTLKK[Q#|Gw#qSCg>x-FwD9W-p(6KIm"sXNOaBo&|kU9\SS~<6H]D}RzBJYW\{\Bw=s?/w=}I2Nmm>P7GMO=AH4s}`f"17n4p@\Vo-7^XJuRm]=!()x8po}x;Y4}$$FQkC7pC^Zh"$g}DceT,':
        print("Too many characters")
    elif tweet == "":
        print("You didn't type anything")
    else:
        print(f"Your tweet has {len(tweet)} characters")