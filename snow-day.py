hours = int(input("Enter hours: "))
initial_snow = float(input("Enter initial snow: "))
rate_of_fall_inches_per_hour = float(input("Enter rate of fall in inches per hour: "))
melting_rate_percentage = float(input("Enter melting rate percentage: "))

total_snow = initial_snow
hourly_melting = (melting_rate_percentage / 100.0)

for _ in range(hours):
    total_snow += rate_of_fall_inches_per_hour * 0.02777778
    total_snow -= hourly_melting * total_snow

print("Snow after {} hours is {:.6f}".format(hours, round(total_snow,6)))