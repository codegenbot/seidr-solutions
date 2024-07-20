def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        if len(word) >= 5: 
            result.insert(0, word[::-1])  
        else:
            result.append(word + ' ')
    return ' '.join(result).strip().rstrip(' ')