def spin_words(sentence): 
    return " ".join(word[::-1] if len(word) >= 5 and len(word) > 4 else word for word in sentence.split())