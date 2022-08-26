import cv2 as cv
import numpy as np
import matplotlib.pyplot as plt
img = cv.imread("111.png")
#cv.imshow("cat", img)
#cv.waitKey(0)
#cv.destroyALLWindows()
cv.rectangle(img,(96,378),(104,393),(255,255,255),-1)
#cv.rectangle(img,(255,176),(284,199),(69,216,255),-1)
cv.putText(img,"5",(100,393),cv.FONT_HERSHEY_COMPLEX ,1,(0,0,0),1)
#cv.putText(img,"5",(265,195),cv.FONT_HERSHEY_COMPLEX_SMALL ,1,(46,27,0),2)
plt.imshow(img[:,:,::-1])
plt.show()
