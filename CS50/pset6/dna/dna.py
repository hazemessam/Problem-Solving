import csv
from sys import argv, exit


sequence = None


def main():
    if len(argv) != 3:
        print(f'Usage: python dna.py data.csv sequence.txt')
        exit(1)

    with open(argv[2], 'r') as sequencefile:
        global sequence
        sequence = sequencefile.read()

    dna = dict()
    with open(argv[1], 'r') as dbfile:
        reader = csv.DictReader(dbfile)
        
        repeaters = reader.fieldnames[1:]

        for repeater in repeaters:
            dna[repeater] = 0

        for repeater in dna:
            dna[repeater] = repeater_count(repeater)
        
        for record in reader:
            num_of_match = 0
            for repeater in repeaters:
                if dna[repeater] == int(record[repeater]):
                    num_of_match += 1

            if num_of_match == len(repeaters):
                print(record['name'])
                exit(0)
        print('No match')

def repeater_count(repeater):
    global sequence
    lengths= list()
    repeater_len = len(repeater)
    try:
        for i in range(len(sequence)):
            start = i
            end = i + repeater_len
            counter = 0
            while True:
                if sequence[start:end] == repeater:
                    counter += 1
                    start = end
                    end = end + repeater_len
                else:
                    lengths.append(counter)
                    break
    except: pass
    finally: return max(lengths)


if __name__ == '__main__':
    main()