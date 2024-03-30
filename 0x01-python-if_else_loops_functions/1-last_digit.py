#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
str_number = str(number)
str_last_number = str_number[-1:]
lst_num = int(str_last_number)
if number >= 0:
    if last_number > 5:
        print(f"Last digit of {number} is {lst_num} and is greater than 5")
    elif last_number == 0:
        print(f"Last digit of {number} is {lst_num} and is 0")
if number < 0:
    print(f"Last digit of {number} is -{lst_num} and is less than 6 and not 0")
else:
    print("TypeError")
