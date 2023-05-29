
import matplotlib.pyplot as plt
x = np.arange(0, 11, 1)
low = fuzz.trimf(x, [0, 0, 5])
medium = fuzz.trimf(x, [0, 5, 10])
high = fuzz.trimf(x, [5, 10, 10])
plt.plot(x, low, 'b', linewidth=1.5, label='Low')
plt.plot(x, medium, 'g', linewidth=1.5, label='Medium')
plt.plot(x, high, 'r', linewidth=1.5, label='High')
plt.legend(loc='center right', fontsize='medium')
plt.xlabel('Input Variable')
plt.ylabel('Membership')
plt.show()
