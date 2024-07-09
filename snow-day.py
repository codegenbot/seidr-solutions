snow = initial_snow
for _ in range(hours):
    snow += rate_of_fall  # add snowfall first
    snow *= (1 - melting_rate)  # then apply melting effect
return round(snow, 6)