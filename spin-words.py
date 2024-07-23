def spin_words(sentence):
    words = sentence.split()
    new_sentence = ' '.join([word if len(word) < 5 else word[:len(word)-5] + word[len(word)-5:][::-1] for word in words])
    return new_sentence