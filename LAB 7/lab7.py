import cv2

import numpy as np

donut = cv2.imread("C:\Users\DUYGU\Desktop\Nebula.jpg")

blue, green, red = cv2.split(donut)

cv2.imshow('Blue channel', blue)
cv2.imshow('Green channel', green)
cv2.imshow('Red channel', red)
cv2.waitKey(0)
cv2.destroyAllWindows()

new_blue_channel = np.zeros_like(blue)
new_green_channel = np.zeros_like(green)

modified_donut = cv2.merge([new_blue_channel, new_green_channel, red])

cv2.imshow('Red and Blue Image', modified_donut)
cv2.waitKey(0)
cv2.destroyAllWindows()