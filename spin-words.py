```
def spin_words(sentence): 
    return " ".join(word[::-1] for word in sentence.split())