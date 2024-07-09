```
def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        if len(word.strip()) >= 5: 
            result.append(word.strip()[::-1])
        else:
            result.append(word.strip()) 
    return ' '.join(result).strip()