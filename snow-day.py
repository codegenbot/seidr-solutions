def snow_day(hours, snow_on_ground, snow_fall_rate, melt_rate):
    total_snow = snow_on_ground
    for hour in range(hours):
        total_snow += snow_fall_rate
        total_snow -= melt_rate * total_snow
    return total_snow


hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
melt_rate = float(input())
result = snow_day(hours, snow_on_ground, snow_fall_rate, melt_rate)
print(result)