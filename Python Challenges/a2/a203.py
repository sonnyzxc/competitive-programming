# insertion sort
def insertionsort(alist):
    for index in range(1, len(alist)):
        currentvalue = alist[index]
        position = index
        while position > 0 and alist[position-1] > currentvalue:
            alist[position] = alist[position-1]
            position = position-1
        alist[position] = currentvalue
    return alist


print(
    insertionsort([1, 2, 3, 5, 6, 236, 23, 7, 236]),
    insertionsort([124125, 1235, 12342342, 3263, 46, 23, 7, 236]),
    insertionsort([1234, 15, 243623, 462135, 246]),
    insertionsort([1242, 35263473, 736, 2345345, 6]),
    insertionsort([1, 2, 3, 5, 6, 232342, 32, 3626, 2, 66, 23, 7, 236]),
    insertionsort([1, 2, 3, 5236, 236262, 6, 236, 23, 7, 236]),
    insertionsort([1, 123, 123, 125, 156, 2, 3, 5, 6, 236, 23, 7, 236]),
    insertionsort([1, 1245125, 1261, 61, 624, 723,
                  47, 2, 3, 5, 6, 236, 23, 7, 236]),
    insertionsort([1, 2, 3, 5, 6, 12611265, 136,
                  236, 12, 51, 236, 23, 7, 236]), sep="\n"
)
