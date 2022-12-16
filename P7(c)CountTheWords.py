print("Enter the Name of File: ")
fileName = input()
fileHandle = open(fileName, "r")
countWord = 0
for content in fileHandle:
  chk = 0
  contentLen = len(content)
  for i in range(contentLen):
    if content[i]==' ':
      if chk!=0:
        countWord = countWord+1
      chk = 0
    else:
      chk = chk+1
  if chk!=0:
    countWord = countWord+1
print("\nTotal Word(s): ")
print(countWord)