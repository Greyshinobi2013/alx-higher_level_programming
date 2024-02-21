"""
Python program that inherits from list
"""

class MyList(list):
    """
    My list inherits from list
    """
    def print_sorted(self):
        """
        Prints the list in ascending order.
        """
        sorted_list = sorted(self)
        print(sorted_list)
