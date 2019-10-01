#include<Python.h>

static PyObject *module_func(PyObject *self, PyObject *args){
	printf("RUN A C PROGRAM");
	int a, b;
	int c;
	if (!PyArg_ParseTuple(args, "ii", &a, &b)){
		return NULL;
	}
	c = a + b;
	return Py_BuildValue("i", c);
}

static PyMethodDef module_methods[] = {
	{"two_sum", (PyCFunction)module_func, METH_VARARGS, NULL},
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef two_sums = {
	PyModuleDef_HEAD_INIT,
	"two_sum",
	NULL,
	-1,
	module_methods
};

PyMODINIT_FUNC PyInit_csum(void)
{
	return PyModule_Create(&two_sums);
}
