d={"Name":"drashti",
   "Age":20,
   "RollNo":1,
   "Branch":"IT"
   }
print("OriginalData:",d)
d["Name"]="janu" #or d.update({"Age":9})
print("ChangeVariable:",d)
d.pop("Age")
print("RemoveVariable:",d)
del d["RollNo"]
print("DeleteVariable:",d)