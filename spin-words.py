s = input().split()
result = " ".join([word[::-1] if len(word) >= 5 else word for word in s])[:-1]