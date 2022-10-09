# 图像灰度化

import cv2

path = "C:\\Users\\wyx\\Desktop\\a3.png"

img = cv2.imread(path, flags=cv2.IMREAD_GRAYSCALE)
img = cv2.resize(img, dsize=(541,677))

cv2.imwrite("C:\\Users\\wyx\\Desktop\\a3.png", img)

