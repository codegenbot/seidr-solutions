def middle_character(s):
    s = ' '.join(e for e in s if e.isalnum()).lower().strip()
    words = s.split()
    total_length = len(' '.join(words))
    if total_length % 2 != 0:
        return words[total_length // 2][0]
    else:
        return ''.join([words[total_length // 2 - 1][-1], words[total_length // 2][0]])