#!/usr/bin/python3
"""
Contains:
    Square(class):
        Attributes:
            size(int): private attribute
        Methods:
            __init__(): initialize instance of the class(Square)
"""


class Square:

    def __init__(self, size=0):
        """
        Attribute:
            size(int): private attribute with default value of 0
        """

        if (isinstance(size, int)):
            self.__size = size
        else:
            raise TypeError("size must be an integer")
        if (isinstance(size,int) and size < 0):
            raise ValueError("size must be >= 0")
