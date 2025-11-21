import matplotlib.pyplot as plt
stages=["IF","ID","EX","MEM","WB"]
plt.plot([1,2,3,4,5],[0,1,2,3,4])
plt.yticks(range(5),stages)
plt.xlabel("Cycle"); plt.ylabel("Stage")
plt.title("Pipeline Timeline Demo")
plt.show()
