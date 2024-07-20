```
def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        if len(word.strip()) >= 5: 
            word = word[::-1].strip()
        result.append(word)
    return ' '.join(result).replace("  ", " ").strip()