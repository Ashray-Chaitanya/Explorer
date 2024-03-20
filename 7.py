import seaborn as sea
import matplotlib.pyplot as plt
tips = sea.load_dataset("tips")
sea.set_theme(style="whitegrid")
sea.scatterplot(x="total_bill", y="tip", style="time", size="size", data=tips)
sea.despine()
plt.xlabel("Total Bill ($)")
plt.ylabel("Tip ($)")
plt.title("Scatter Plot of Total Bill vs Tip")
plt.show()