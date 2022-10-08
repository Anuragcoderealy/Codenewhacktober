# Write a python program to get tge length in bytes of one array item in the internal representation.
from array import *
array_num = array('i',[1,2,3,4,5,6,7,8,9,0,34543])
print("Length of the array in bytes:"+str(array_num.itemsize)+str("Bytes"))