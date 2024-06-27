import numpy as np
import time
a=np.zeros(4)
print(f"np.zeros(4):a= {a},a shape={a.shape},a data type={a.dtype}")
a = np.zeros((4,))
print(f"np.zeros(4,) :  a = {a}, a shape = {a.shape}, a data type = {a.dtype}")
a = np.random.random_sample(4)
print(f"np.random.random_sample(4): a = {a}, a shape = {a.shape}, a data type = {a.dtype}")
np.ones(2,2)
print (f"np.ones(2,2):   dtype=int")
