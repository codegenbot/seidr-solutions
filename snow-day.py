def snow_day(hours, snow_ground, snow_fall_rate, snow_melt_rate):
    remaining_snow = snow_ground
    for i in range(hours):
        remaining_snow += snow_fall_rate
        remaining_snow = remaining_snow - (snow_melt_rate * remaining_snow)
    return remaining_snow


hours = int(input())
snow_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())
result = snow_day(hours, snow_ground, snow_fall_rate, snow_melt_rate)
print(result)