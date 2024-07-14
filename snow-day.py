Here is the solution:

def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    return initial_snow + (rate_of_snowfall * hours) - (melting_rate * hours)

# Example usage:
hours = int(input("Enter number of hours: "))
initial_snow = float(input("Enter initial amount of snow: "))
rate_of_snowfall = float(input("Enter rate of snow fall per hour: "))
melting_rate = float(input("Enter proportion of snow melting per hour: "))

print(snow_day(hours, initial_snow, rate_of_snowfall, melting_rate))