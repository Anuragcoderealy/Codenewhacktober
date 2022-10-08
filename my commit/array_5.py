# Write a Python program to get the current
#  memory address and the length in elements 
#  of the buffer used to hold an array's contents and
#  also find the size of the memory buffer in bytes.
from array import *
array_num = array('i',[1,2,3,4,5])
print("Current memory adress of the array is : "+str(array_num.buffer_info()))
print("The size of the memory buffer in bytes is : "+str(array_num.buffer_info()[1] * array_num.itemsize))