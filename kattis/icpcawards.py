teams = []
for x in range(int(input())):
    a = input().split()
    teams.append([a[0],a[1]])

winteam = []
accepted = []
for x in range(len(teams)):
    if teams[x][0] not in accepted:
        accepted.append(teams[x][0])
        winteam.append(teams[x][1])

for x in range(12):
    print(accepted[x],winteam[x])
