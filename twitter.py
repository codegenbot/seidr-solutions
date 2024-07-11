import re
print(f"Your tweet has {len(re.sub(r'\W+', '', tweet).encode('utf-8'))} characters")