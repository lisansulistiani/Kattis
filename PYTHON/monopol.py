def possible_combinations(x):
  # Initialize the possible sums and their count
  count = 0

  # Loop through all combinations of the two dice rolls
  for die1 in range(1, 7):  # Die 1 rolls between 1 and 6
      for die2 in range(1, 7):  # Die 2 rolls between 1 and 6
          if die1 + die2 == x:  # Check if the sum is 7
              count += 1

  # print(f"Number of combinations that sum to {x}: {count}")
  return count

N = int(input()) # number of hotels the opponents own
A = map(int,input().split()) #distances to each of the opponent's N hotels
total = 0
for item in A:
  total+=(possible_combinations(item)/36)
print(total)