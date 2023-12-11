```python
def snow_day(hours, initial_snow, snow_fall, melt_rate):
    # Calculate the amount of snow that falls in each hour
    snow_fall_per_hour = snow_fall / hours
    
    # Initialize the total amount of snow on the ground to 0
    total_snow = 0.0
    total_snow_fallen = 0.0
    
    # Loop through each hour and calculate the amount of snow that falls and melts
    for i in range(hours):
        # Calculate the amount of snow that falls in this hour
        snow_fallen = snow_fall_per_hour * (i + 1)
        
        # Calculate the amount of snow that melts in this hour
        melted_snow = total_snow_fallen * melt_rate
        
        # Update the total amount of snow on the ground and the total amount of snow fallen
        total_snow += snow_fallen - melted_snow
        total_snow_fallen += snow_fallen
    
    return total_snow
```