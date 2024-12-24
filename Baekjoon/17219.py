n, m = map(int,input().split())
pwManager = {}
for i in range(n):
    ID, PW = input().split()
    pwManager[ID] = PW
for i in range(m):
    ID = input()
    print(pwManager[ID])