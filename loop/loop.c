#include<Python.h>

static PyObject *module_func(PyObject *self, PyObject *args){
	printf("RUN A C PROGRAM");
	int num = 0;
	for(int i=0; i<1000000; i++){
		num += 1;
	}
	return Py_BuildValue("i", num);
}

static PyMethodDef module_methods[] = {
	{"loop", (PyCFunction)module_func, METH_NOARGS, NULL},
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef loops = {
	PyModuleDef_HEAD_INIT,
	"loop",
	NULL,
	-1,
	module_methods
};

PyMODINIT_FUNC PyInit_loop(void)
{
	return PyModule_Create(&loops);
}
