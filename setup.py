from distutils.core import setup, Extension
setup(name='ctest', 
      version='1.0.0',
      description='This is a test package',
      ext_modules=[Extension('hello', ['hello_world/hello.c']),
                     Extension('loop', ['loop/loop.c']),
                     Extension('csum', ['csum/csum.c'])])

