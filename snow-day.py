def snow_day(hours, snow_on_ground, rate_of_snow_fall, snow_melt):
    snow = snow_on_ground
    for _ in range(hours):
        snow += rate_of_snow_fall
        snow -= snow * snow_melt
    return snow


hours = int(input())
snow_on_ground = float(input())
rate_of_snow_fall = float(input())
snow_melt = float(input())
result = snow_day(hours, snow_on_ground, rate_of_snow_fall, snow_melt)
print(result)