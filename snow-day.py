for _ in range(hours):
    total_snow += rate_of_snowfall  
    melted_snow = min(total_snow * melting_rate, total_snow)  
    total_snow -= melted_snow
    if total_snow < 0: total_snow = 0

print(round(total_snow, 7))