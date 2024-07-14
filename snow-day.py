```
hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

total_snow = initial_snow
for _ in range(hours):
    new_snow = total_snow + rate_of_snowfall  
    melted_snow = min(new_snow * melting_rate, new_snow)  
    total_snow = new_snow - melted_snow
    
print(round(total_snow, 7))