#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
str_number = str(number)
str_last_number = str_number[-1:]
lst_num = int(str_last_number)
if lst_num > 5 and number > 0:
    msg = f"Last digit of {number} is {lst_num} and is greater than 5"
elif lst_num == 0:
    msg = f"Last digit of {number} is {lst_num} and is 0"
elif lst_num < 6 and lst_num != 0 and number > 0:
    msg = f"Last digit of {number} is {lst_num} and is less than 6 and not 0"
elif -lst_num < 6 and -lst_num != 0 and number < 0:
    msg = f"Last digit of {number} is -{lst_num} and is less than 6 and not 0"
else:
    msg = "TypeError"
print(msg)
