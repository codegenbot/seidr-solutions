def spin_words(sentence):
    words = sentence.split()
    result = []
    for i, word in enumerate(words):
        if len(word) >= 5: 
            result.append(word[::-1] + ' ')  
        else: 
            result.append(word + ' ')
    return ' '.join(result).strip().capitalize() if i == 0 else ' '.join(result).strip()