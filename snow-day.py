Here is the solution:

def snow_day(hours, snow_ground, rate_of_snow_fall, proportion_melting):
    return snow_ground + (rate_of_snow_fall * hours) - (proportion_melting * hours)

hours = int(input())
snow_ground = float(input())
rate_of_snow_fall = float(input())
proportion_melting = float(input())

print(snow_day(hours, snow_ground, rate_of_snow_fall, proportion_melting))