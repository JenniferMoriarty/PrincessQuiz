import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 2*np.pi, 10)
y = np.sin(x)
plt.scatter(x, y)
plt.show()

