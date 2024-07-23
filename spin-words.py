def spin_words(words): 
    return " ".join([word[::-1] if len(word) >= 5 else word for word in words.split()])