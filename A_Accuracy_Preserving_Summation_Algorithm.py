import numpy as np
import sys

#
#THIS IS COMPLETELY CHATGPT, I TAKE NO CREDIT IN THIS, I JUST WANTED TO TRY THE ICPC CHALLENGE
#FINAL SCORE: 466.07 POINTS.
#

def simulate_fp16(value):
    return np.float16(value).astype(np.float64)

def chunk_sequence(sequence, chunk_size):
    for i in range(0, len(sequence), chunk_size):
        yield sequence[i:i + chunk_size], range(i + 1, i + 1 + len(sequence[i:i + chunk_size]))

def generate_algorithm(sequence):
    N = len(sequence)
    if N <= 2000:
        return f"{{d:{','.join(map(str, range(1, N + 1)))}}}"
    
    chunk_size_fp16 = 2000
    fp16_sums = []
    for chunk, indices in chunk_sequence(sequence, chunk_size_fp16):
        if len(chunk) > 1:
            chunk_indices = ','.join(map(str, indices))
            fp16_sums.append(f"{{h:{chunk_indices}}}")
        else:
            fp16_sums.append(str(indices[0]))
    
    if len(fp16_sums) <= 2000:
        return f"{{s:{','.join(fp16_sums)}}}"
    
    chunk_size_fp32 = 2000
    fp32_sums = []
    for i in range(0, len(fp16_sums), chunk_size_fp32):
        chunk = fp16_sums[i:i + chunk_size_fp32]
        if len(chunk) > 1:
            chunk_algorithm = f"{{s:{','.join(chunk)}}}"
            fp32_sums.append(chunk_algorithm)
        else:
            fp32_sums.append(chunk[0])
    
    return f"{{d:{','.join(fp32_sums)}}}"

# Example Usage
input_line = sys.stdin.read().strip()
tokens = input_line.split()
N = int(tokens[0])
sequence = list(map(float, tokens[1:]))

algorithm = generate_algorithm(sequence)
print(algorithm)
