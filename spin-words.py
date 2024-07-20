def spin_words(sentence):
    return " ".join(
        word.strip().translate(str.maketrans("", "", string.punctuation))[::-1] 
        if len(word.strip()) >= 5 else word
        for word in sentence.split()
    )