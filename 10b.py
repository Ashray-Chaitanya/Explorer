import plotly.express as px
data = {
'City': ['New York', 'San Francisco', 'Los Angeles', 'Chicago', 'Houston'],
'Lat': [40, 37, 34, 41, 29],
'Lon': [-74, -122, -118, -87, -95],
'Population': [817513, 870887, 397883, 271000, 238000]
}
img = px.scatter_geo(data, lat='Lat', lon='Lon', text='City', size='Population',projection='natural earth', title='Population of Cities')
img.update_traces(textposition='top center')
img.show()  