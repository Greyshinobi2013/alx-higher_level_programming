#!/usr/bin/python3

def lookup(obj):
    """
    Returns list of attributes and methods of the given object.

    Args:
        obj:Any pyhthon object.
    Return:
        list: A list containing attribute and method names.
    """
    return dir(obj)
