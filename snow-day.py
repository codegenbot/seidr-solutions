```
def snow_day(hours, initial_snow, rate_of_fall, melting_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_fall  
        snow = min(snow + rate_of_fall, 1000)  
        snow -= melting_rate  
        snow = max(0, snow)  
    return snow