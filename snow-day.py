def snow_day(hours, snow_on_ground, rate_of_snow_fall, snow_melting_proportion):
    snow = snow_on_ground
    for i in range(hours):
        snow += rate_of_snow_fall
        snow -= snow * snow_melting_proportion
    return snow


hours = int(input())
snow_on_ground = float(input())
rate_of_snow_fall = float(input())
snow_melting_proportion = float(input())

result = snow_day(hours, snow_on_ground, rate_of_snow_fall, snow_melting_proportion)
print(result)