import plotly.graph_objects as go
import plotly.offline as pyo
import pandas as pd

data = {'Date': pd.date_range(start='2023-01-01', periods=10, freq='D'), 'Value': [25, 30, 35,40, 45, 50, 55, 60, 65, 70]}
df = pd.DataFrame(data)
trace = go.Scatter(x=df['Date'], y=df['Value'], mode='lines')
layout = go.Layout(title='Time Series Plot', xaxis=dict(title='Date'), yaxis=dict(title='Value'))
fig = go.Figure(data=[trace], layout=layout)
pyo.plot(fig)
     