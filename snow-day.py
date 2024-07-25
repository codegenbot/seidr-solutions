Here is the solution:

def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    return initial_snow + (rate_of_snowfall * hours) - (proportion_melting * hours)

# example usage:
hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
proportion_melting = float(input())

print(snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting))