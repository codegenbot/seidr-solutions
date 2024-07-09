def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        if len(word.strip()) >= 5:  
            result.append(word[::-1] + ' ')  # Add space after reversing
        else:
            result.append(word)
    return ' '.join(result).strip().rstrip()