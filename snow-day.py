def snow_day(hours, snow_ground, snow_fall_rate, snow_melt_rate):
    snow = snow_ground
    for _ in range(hours):
        snow += snow_fall_rate - snow_melt_rate * snow
    return snow


hours = int(input())
snow_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

result = snow_day(hours, snow_ground, snow_fall_rate, snow_melt_rate)
print(result)