#include <Python.h>
#include <stdio.h>

/**
 * print_python_list - Prints basic info about Python lists.
 * @p: A PyObject list object.
 *
 * Return: Nothing.
 */
void print_python_list(PyObject *p)
{
	long int size, i;
	PyListObject *list;
	PyObject *item;

	printf("[*] Python list info\n");
	if (!PyList_Check(p))
	{
		printf("  [ERROR] Invalid List Object\n");
		return;
	}

	list = (PyListObject *)p;
	size = Py_SIZE(p);

	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", list->allocated);
	for (i = 0; i < size; i++)
	{
		item = PyList_GET_ITEM(p, i);
		printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
	}
}

/**
 * print_python_bytes - Prints basic info about Python bytes.
 * @p: A PyObject bytes object.
 *
 * Return: Nothing.
 */
void print_python_bytes(PyObject *p)
{
	PyBytesObject *bytes;
	unsigned char *str;
	long int size, i;

	printf("[*] Python bytes\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	bytes = (PyBytesObject *)p;
	str = bytes->ob_sval;
	size = Py_SIZE(p);

	printf("  Size of the Python Bytes = %ld\n", size);
	printf("  Trying string: %s\n", str);
	printf("  First %ld bytes: ", size < 10 ? size + 1 : 10);
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
	printf("  value: %s\n", PyOS_double_to_string(value, 'r', 0, Py_DTSF_ADD_DOT_0, NULL));
}
