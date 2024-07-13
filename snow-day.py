Here is the solution to the problem:

def snow_day(hours, ground_snow, rate_of_snowfall, proportion_of_melting):
    return round(ground_snow + (rate_of_snowfall * hours) - (proportion_of_melting * hours), 9)

# Read input from user
hours = int(input())
ground_snow = float(input())
rate_of_snowfall = float(input())
proportion_of_melting = float(input())

print(snow_day(hours, ground_snow, rate_of_snowfall, proportion_of_melting))