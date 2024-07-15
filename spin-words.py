def spin_words(sentence): 
    sentence = sentence.rstrip() 
    return " ".join(word[::-1] if len(word) >= 5 else word for word in sentence.split())