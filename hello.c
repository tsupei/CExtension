#include<Python.h>

static PyObject *module_func(PyObject *self, PyObject *args){
	printf("RUN A C PROGRAM");
	return Py_BuildValue("s", "Hello!");
}

static PyMethodDef module_methods[] = {
	{"hello", (PyCFunction)module_func, METH_NOARGS, NULL},
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef hellos = {
	PyModuleDef_HEAD_INIT,
	"hello",
	NULL,
	-1,
	module_methods
};

PyMODINIT_FUNC PyInit_hello(void)
{
	return PyModule_Create(&hellos);
}
