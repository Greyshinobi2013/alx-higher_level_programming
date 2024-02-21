"""
Return list of available attributes and  methods of an object.
"""


class MyList(list):
    """
    My list class inherits list object.
    """

    def print_sorted(self):
        """
        Prints the list in ascending order.
        Ar:gs:
            self: of object
        Return:
            list of object
        """
        sorted_list = sorted(self)
        return sorted_list
