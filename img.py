from skimage import io
import numpy as np
from matplotlib import pyplot as plt
my_img=io.imread("img.jpg")
#print(my_img)

random_img=np.random.random([90,255])
plt.imshow(random_img)