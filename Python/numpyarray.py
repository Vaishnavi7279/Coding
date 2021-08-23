#built in methods in numpy
import numpy as np
my_list = [1,2,3] #creating a list
np.array(my_list) #creating an array with element list
my_matrix = [[1,2,3],[4,5,6],[7,8,9]] #creating a matrix with arrays
np.array(my_matrix)
np.arange(0,10) #gives 0-9 as the array
np.arange(0,11,2) #creating an array from 0-10 with elements with an interval of 2
#0-1 functions
np.zeros(3) #creates 1D array with 3 (0) elements 
np.zeros((5,5)) #creates 2D array with 5*5 (0) elements
np.ones((3,3)) #creates 2D array with 3*3 (1) elements
#linespace
np.linspace(0,10,3) #gives an array in range 0-10 with 3 elements
np.eye(4) #creates a matrix of size 4 with diagonal elements 1
np.eye(5,4) #creates a matrix of size 5*4 with diagonal elements 1
np.random.rand(2) #generates any 2 random number in an array
np.random.rand(5,3) #creates a matrix of size 5*3 with any random numbers
np.random.randn(2) #generates any 2 random number in an array with standard normal distribution
np.random.randn(5,5) #creates a matrix of size 5*3 with any random numbers with standard normal distribution
np.random.randint(1,100) #generates any random number between 1-100
np.random.randint(1,100,4) #generates 4 random numbers in the given range
arr = np.arange(25)
ranarr = np.random.randint(0,50,10) #creates an array ranarr with 10 random elements from the given range
arr.reshape(5,5)
ranarr.max() #gives maximum in the array
ranarr.min() #gives minimun in the array
#shaping and reshapin the array
arr.shape
arr.reshape(1,25)
arr.reshape(1,25).shape