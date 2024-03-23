import random
import string

# Define the length of the string
length = int(1e5)

# Generate a random string of lowercase alphabetical characters
random_string = ''.join(random.choices(string.ascii_lowercase, k=length))

print(random_string)