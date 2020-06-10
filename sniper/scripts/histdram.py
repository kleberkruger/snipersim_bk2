import argparse, os, csv, sys
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.ticker import PercentFormatter

parser = argparse.ArgumentParser()
parser.add_argument('filepath')
args = parser.parse_args()
filepath = os.path.splitext(args.filepath)[0]
print("Gerando histograma para o arquivo '{}.csv'...".format(filepath))

min_interval, max_interval, data = sys.maxsize, 0, []

with open(filepath + '.csv') as csv_file:
    for line in csv_file:
        _, tm = [int(x) for x in line.split(",")]
        min_interval = min(min_interval, tm)
        max_interval = max(max_interval, tm)
        data.append(tm)

plt.style.use('seaborn-whitegrid')
plt.xlabel('Tempo(ns) sem escrita na DRAM')
plt.ylabel('Porcentagem dos acessos de escrita')
plt.hist(data, bins=256, weights=np.ones(len(data)) / len(data))
plt.gca().yaxis.set_major_formatter(PercentFormatter(1))
plt.savefig(filepath + '.png')
print("Histograma gerado em: '{}.png'".format(filepath))

# normalized = [int(x * 100 / max_interval) for x in times_between_accesses]
# result = [0] * 101

# for x in normalized: 
#     result[x] += 1

# result = [0,0,0,0,0,1,2,3,4,5,6,9]
# result = [5,1,1,1,1,1,0,0,0,1]
# print('{}\n'.format(times_between_accesses))
# print('{}\n'.format(normalized))
# print('{}\n'.format(result))

# plt.hist(result)
# plt.hist(normalized)
# plt.savefig('test/fft/dram_log.png')
