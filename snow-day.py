```
total_snow = initial_snow
for _ in range(total_hours):
    total_snow += rate_of_snowfall
    total_snow *= (1 - melting_rate)
print(total_snow)