open_file = open("myFile.txt", "r")
count = 0
text = open_file.read()
list = text.split("\n")
for x in list:
    if x:
        count += 1

print("Total number of lines in the text file are:", count)
