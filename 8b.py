from bokeh.plotting import figure, show
from bokeh.layouts import layout
import numpy as np

x = [1, 2, 3, 4, 5]
y= [2, 4, 6, 8, 10]

p1 = figure(title="LinePlot", x_axis_label="X-axis", y_axis_label="Y-axis")
p1.line(x, y, line_width=2, line_color="blue")

p2 = figure(title="ScatterPlot", x_axis_label="X-axis", y_axis_label="Y-axis")
p2.scatter(x, y, size=10, color="red", marker="circle")

p3 = figure(title="BarPlot", x_axis_label="X-axis", y_axis_label="Y-axis")
p3.vbar(x=x, top=y, width=0.5, color="green")

p4 = figure(title="Histogram", x_axis_label="Value", y_axis_label="Frequency")
hist, edges = np.histogram(y, bins=5)
p4.quad(top=hist, bottom=0, left=edges[:-1], right=edges[1:], fill_color="purple",line_color="black")

layout = layout([[p1, p2], [p3, p4]])
show(layout)