m1,m2,m3 = map(int,(input("Enter marks for test 1 ,2 ,3 : ").split()))

if m1 <= m2 and m1 <= m3:
    avgMarks = (m2+m3)/2
elif m2 <= m1 and m2 <= m3:
    avgMarks = (m1+m3)/2
else:
    avgMarks = (m1+m2)/2
    
print("Average of best two test marks out of three test’s marks is", avgMarks)