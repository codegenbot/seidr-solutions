def spin_words(sentence): 
    return " ".join([word.strip() + " " if len(word) >= 5 else word+" " for word in sentence.split()])