def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    current_snow = snow_on_ground
    for _ in range(hours):
        current_snow += snow_fall_rate
        current_snow -= snow_melt_rate * current_snow
    return current_snow


hours = int(input().strip())
snow_on_ground = float(input().strip())
snow_fall_rate = float(input().strip())
snow_melt_rate = float(input().strip())

result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)