```
def spin_words(sentence):
    return " ".join(
        word.strip(string.whitespace).translate(str.maketrans("", "", string.punctuation))[::-1] 
        if len(word.strip(string.whitespace)) >= 5 else word
        for word in sentence.split()
    )