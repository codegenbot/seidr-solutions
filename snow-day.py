hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

total_snow = initial_snow
for _ in range(hours):
    total_snow += rate_of_snowfall - min(total_snow * melting_rate, rate_of_snowfall)  
    if total_snow > 0:
        total_snow -= min(total_snow, rate_of_snowfall / melting_rate)

print(round(total_snow, 7))