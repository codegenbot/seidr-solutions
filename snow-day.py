def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_on_ground
    for _ in range(hours):
        snow += snow_fall_rate
        snow -= snow_melt_rate * snow
        snow = max(snow, 0)  # Ensure snow amount is non-negative
    return snow

# Input
hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

# Output
result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)