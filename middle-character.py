def get_middle(s):
    return s.encode('utf-8').decode()[len(s) // 2 - (len(s) % 2 == 0) : len(s) // 2 + (len(s) % 2 == 0)]