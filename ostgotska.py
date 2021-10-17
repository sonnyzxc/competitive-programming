a = input().split()
c = 0
for x in a:
    if 'ae' in x:
        c += 1

if c/len(a) >= 0.4:
    print('dae ae ju traeligt va')
else:
    print('haer talar vi rikssvenska')
