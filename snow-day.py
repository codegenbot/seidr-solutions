Here is the solution:

def snow_day(hours, snow_on_ground, rate_of_snow_fall, proportion_melting_per_hour):
    return (snow_on_ground + hours * rate_of_snow_fall) - (hours * proportion_melting_per_hour)

input_hours = int(input())
input_snow_on_ground = float(input())
input_rate_of_snow_fall = float(input())
input_proportion_melting_per_hour = float(input())

print(snow_day(input_hours, input_snow_on_ground, input_rate_of_snow_fall, input_proportion_melting_per_hour))