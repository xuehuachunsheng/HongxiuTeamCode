import numpy as np
x = np.array([3,5,1,9,6,3])
print(x[(x%2==1)&(x>3)][0])
