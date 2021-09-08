#working on files in python
file=open("C:\\Coding\\Python\\New File.txt")
for line in file:
    print(line)
data=file.read()
print(len(file))
print(file[:10])
for line in file:
    line=line.strip()
    if line.startswith("Hello"):
        print(line)
for line in file:
    line=line.strip()
    if not line.startswith("Hello"):
        continue
print(line)