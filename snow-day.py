```python
hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

total_snow = initial_snow
for _ in range(hours):
    melted_snow = min(total_snow * melting_rate, total_snow)  
    total_snow -= melted_snow
    total_snow += rate_of_snowfall  
print("{:.7f}".format(round(total_snow, 7)))