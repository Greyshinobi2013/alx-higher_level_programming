#include <Python.h>
#include <stdio.h>

/**
 * print_python_list - Prints basic info about Python lists.
 * @p: A PyObject list object.
 *
 * This function takes a PyObject list object as an argument and prints basic
 * information about the list. If the object is not a valid PyListObject, it
 * prints an error message.
 *
 * Return: Nothing.
 */
void print_python_list(PyObject *p)
{
	long int size, i;
	PyObject *item;

	printf("[*] Python list info\n");
	if (!PyList_Check(p))
	{
		printf("  [ERROR] Invalid List Object\n");
		return;
	}

	size = ((PyVarObject *)p)->ob_size;

	printf("[*] Size of the Python List = %ld\n", size);
	for (i = 0; i < size; i++)
	{
		item = (*(PyObject **)(p + i));
		printf("Element %ld: %s\n", i, item->ob_type->tp_name);
	}
}

/**
 * print_python_bytes - Prints basic info about Python bytes.
 * @p: A PyObject bytes object.
 *
 * This function takes a PyObject bytes object as an argument and prints basic
 * information about the bytes. It prints a maximum of 10 bytes. If the object
 * is not a valid PyBytesObject, it prints an error message.
 *
 * Return: Nothing.
 */
void print_python_bytes(PyObject *p)
{
	char *str;
	long int size, i;

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	str = ((PyBytesObject *)p)->ob_sval;
	size = ((PyVarObject *)p)->ob_size;

	printf("  Size = %ld\n", size);
	printf("  trying string: %s\n", str);
	printf("  first %ld bytes: ", size < 10 ? size + 1 : 10);
	for (i = 0; i < size + 1 && i < 10; i++)
	{
		printf("%02hhx", str[i]);
		if (i < 9 && i < size)
			printf(" ");
	}
	printf("\n");
}

/**
 * print_python_float - Prints basic info about Python float objects.
 * @p: A PyObject float object.
 *
 * This function takes a PyObject float object as an argument and prints basic
 * information about the float. If the object is not a valid PyFloatObject, it
 * prints an error message.
 *
 * Return: Nothing.
 */
void print_python_float(PyObject *p)
{
	double value;

	printf("[*] Python float\n");
	if (!PyFloat_Check(p))
	{
	printf("  [ERROR] Invalid Float Object\n");
	return;
	}

	value = ((PyFloatObject *)p)->ob_fval;
	printf("  value: %s\n", PyOS_double_to_string(value, 'r', 0,
	Py_DTSF_ADD_DOT_0, NULL));
}
