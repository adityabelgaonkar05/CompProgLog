n = int(input())
ideal = ["purple", "green", "blue", "orange", "red", "yellow"]
stone = ["Power", "Time", "Space", "Soul", "Reality", "Mind"]
input_c = []

for _ in range(n):
  input_c.append(input())

output_c = []

for i in ideal:
  if i not in input_c:
    output_c.append(stone[ideal.index(i)])

print(len(output_c))
for i in output_c:
  print(i)
