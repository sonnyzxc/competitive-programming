def TowerOfHanoi(n , rod1, rod3, rod2):
    if n == 1: # base case
        print("Move disk number 1 to rod",rod3,"from rod",rod1)
        return

    TowerOfHanoi(n-1, rod1, rod2, rod3)
    
    print("Move disk number",n,"to rod",rod3,"from rod",rod1)
    
    TowerOfHanoi(n-1, rod2, rod3, rod1)
         

n = int(input("How many disks are there?: "))

TowerOfHanoi(n, 'A', 'C', 'B')
