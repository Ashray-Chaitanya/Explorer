import matplotlib.pyplot as plt
categories = ['Category A', 'Category B', 'Category C', 'Category D']
values = [25, 50, 75, 100]
plt.bar(categories, values, color='blue')
plt.xlabel('Categories')
plt.ylabel('Values')
plt.title('Bar Plot Example')
plt.show()