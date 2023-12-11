def get_snow_amount(hours, snow_on_ground, snow_fall_rate, melting_proportion):
    # Add snow for each hour
    for i in range(1, hours + 1):
        snow_on_ground += snow_fall_rate
    
    # Melt the snow
    snow_on_ground *= (1 - melting_proportion) ** hours
    
    return snow_on_ground
```