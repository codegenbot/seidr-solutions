def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        if len(word) >= 5: 
            result.append(word[::-1] + ' ')  
        else: 
            result.append(word + ' ')
    return ' '.join(result).strip().capitalize() if ' '.join(map(str, result)).split()[0].islower() else ' '.join(result)