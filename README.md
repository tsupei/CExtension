# CExtention
Try to use C Library as an extension for Python

# Introduction
Some heavy calculation in Python could be handled by C alternatively.

# Overview

1. Write C Functions
2. Enable C Extentions in setpy.py
3. Generate modules by `Distutils`

# Testing Steps

1. git clone this repository
2. Enter an virtual environment(Optional)
3. Run
```commandline
python setup.py install
cd test
python test_hello_world.py
```
# Results
- test_loop.py - We add a number from 0 to 1,000,000.
```	
C prograom: Takes about 0.00001s
Python Program: Takes about 0.12226s 
``` 
