def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt):
    for h in range(hours):
        snow_on_ground += snow_fall_rate
        snow_on_ground *= 1 - snow_melt
    return snow_on_ground


hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt = float(input())

result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt)
print(result)