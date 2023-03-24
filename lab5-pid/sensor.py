import serial
from matplotlib import pyplot as plt
import numpy as np

ser = serial.Serial('/dev/ttyACM0', baudrate=115200)

plt.ion()
while True:
  raw_str = ser.readline()
  try:
    raw_data = list(map(int, (raw_str).decode('utf-8').split("\t")[:-1]))
    cubes = [np.ones((3,3,3))* (d/1024) for d in raw_data[:-1]]
    plt.imshow(np.hstack(cubes))
    plt.title(str(raw_data))
    plt.xlabel(raw_data[-1])
  except:
    print(raw_str.decode('utf-8'))

  plt.pause(0.05)
  