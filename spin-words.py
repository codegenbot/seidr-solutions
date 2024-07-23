```
return ' '.join(''.join([c for c in word if c != ' '])[::-1] if ''.join([c for c in word if c != ' ']).length >= 5 else word for word in sentence.split())