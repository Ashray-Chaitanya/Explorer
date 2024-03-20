import matplotlib.pyplot as plt
x = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
y = [10, 15, 13, 17, 20, 22, 25, 30, 28, 35]
plt.scatter(x, y, color='blue', marker='o', label='Scatter Points')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.title('Scatter Plot Example')
plt.legend()
plt.grid(True)
plt.show()