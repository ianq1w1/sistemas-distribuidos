def main():
    memory = []

    for i in range(5):
        memory.append (i + 1)

    for j in memory[:10]:
        print("value = {0}".format(j))

if __name__ == "__main__" :
    main()