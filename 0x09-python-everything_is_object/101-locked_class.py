#!/usr/bin/python3
class LockedClass:
    """
    This class is locked class.
    Attribute:
            __slots__ : used to declare a fixed set of attribute that instances of the class can have. In this case 'first_name'
    """
    __slots__ = ['first_name']
