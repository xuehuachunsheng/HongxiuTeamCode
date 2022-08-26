import cv2 as cv
import numpy as np
import matplotlib.pyplot as plt
img = cv.imread("编辑.jpg")
#cv.rectangle(img,(40.176),(67,195),(75,206,255),-1)
#cv.putText(img,"Library Administration",(57,30),cv.FONT_HERSHEY_COMPLEX,1,(255,255,255),1)
#显示
cv.imshow("1111", img)
cv.waitKey(0)
cv.destroyALLWindows()
