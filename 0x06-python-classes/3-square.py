#!/usr/bin/python3

"""
Module:
    Square(class):
        __init__: intialize instance of object
        area: return area of circle
"""


class Square:
    """
    Methods:
        __init__(self, size=0):
            initialize object with integer value and raise exception
            if the size is not integer and is less than 0

    """

    def __init__(self, size=0):
        """
        Attribute:
            size( int ):private
                - must be integer
                - if size is not integer
                    raise TypeError "size must be an integer"
                  eles
                    raise ValueError "size must be >= 0"
        """

        if (isinstance(size, int)):
            self.__size = size
        else:
            raise TypeError("size must be an integer")
        if (isinstance(size, int) and size < 0):
            raise ValueError("size must be >= 0")

    def area(self):
        """
        Return:
            -area of a circle
        """
        area = (self.__size ** 2) * 3.14
        return area
