import loop
import time

# C Program
s = time.time()
num = loop.loop()
e = time.time()
print("C Program")
print("num: {}, cost: {:.10f}".format(num, e-s))

# Python Program
s = time.time()
num = 0
for i in range(1000000):
    num += 1
e = time.time()
print("Python Program")
print("num: {}, cost: {:.10f}".format(num, e-s))


