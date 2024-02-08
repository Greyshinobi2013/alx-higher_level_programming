#!/usr/bin/python3

def safe_print_list_integers(my_list=[], x=0):
    count = 0
    for i in range(x):
        try:
            if x > x:
                print("{:d}".format(my_list[i]), end="")
                print('Traceback (most recent call last):')
            else:
                print("{:d}".format(my_list[i]), end="")
                count += 1
        except (ValueError, TypeError, IndexError):
            continue
    print()
    return count
