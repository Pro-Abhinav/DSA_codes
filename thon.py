def maxOperations(str):

    i, V, VN, VNC, VNCD = 0, 0, 0, 0, 0
    for i in range(len(str)):
        if (str[i] == 'V'):

            V += 1

        elif (str[i] == 'N'):

            if (V > 0):
                V -= 1
                VN += 1

        elif (str[i] == 'C'):

            if (VN > 0):
                VN -= 1
                VNC += 1

        elif (str[i] == 'D'):
            if (VNC > 0):
                VNC -= 1
                VNCD += 1

    return VNCD

# Driver code
if __name__ == "__main__":
    print(maxOperations(input()))



s = input()
list1=[]
list1.append(s.count("V"))
list1.append(s.count("N"))
list1.append(s.count("C"))
list1.append(s.count("D"))
print(min(list1))