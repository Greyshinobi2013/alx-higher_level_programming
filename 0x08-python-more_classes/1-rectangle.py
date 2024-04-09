#!/usr/bin/python3
class Rectangle:

    def __init__(self, width=0, height=0):
        self.set_width(width)
        self.set_height(height)
    def get_width(self):
        return self.__width
    def set_width(self, value):
        if(value == int(value)):
            raise TypeError('width must be an integer')
        elif(value < 0):
            raise ValueError('width must be >= 0')
        else:
            self.__width = value
    def get_height(self):
        return self.__height
    def set_height(self, value):
        
        if(value == int(value)):
            raise TypeError('height must be an integer')
        elif(value < 0):
            raise ValueError('height must be >= 0')
        else:
            self.__height = value

