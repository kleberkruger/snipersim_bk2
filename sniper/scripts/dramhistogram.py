import matplotlib.pyplot as plt

pkt_times = []
times_between_accesses = []

# python csv

min = 999999999999
max = 0

file = open("./../test/fft/dram_log.txt", "r")
for line in file:
  _, a, b = line.split("|")
  b = int(b)
  if b < min:
      min = b
  if b > max:
      max = b

  pkt_times.append(int(a))
  times_between_accesses.append(int(b))

convertido = [x * 100 / (max) for x in times_between_accesses]

resposta = [0] * 101
for x in convertido:
  resposta[int(x)] += 1

# plt.plot(pkt_times, times_between_accesses)
# plt.xlabel('Pkt Time (ns)')
# plt.ylabel('Time between access (ns)')
# plt.title('Time between access')
# plt.show()

plt.style.use('ggplot')
plt.hist(resposta)
plt.show()
