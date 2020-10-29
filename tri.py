tri= input()
newlist = tri.split()
newlist = [int(i) for i in newlist]

f = newlist[0]
s = newlist[1]
t = newlist[2]
anslist = []
if f*s == t:
    anslist.append(str(f))
    anslist.append('*')
    anslist.append(str(s))
    anslist.append('=')
    anslist.append(str(t))
elif f+s==t:
    anslist.append(str(f))
    anslist.append('+')
    anslist.append(str(s))
    anslist.append('=')
    anslist.append(str(t))
elif f-s==t:
    anslist.append(str(f))
    anslist.append('-')
    anslist.append(str(s))
    anslist.append('=')
    anslist.append(str(t))
elif f/s==t:
    anslist.append(str(f))
    anslist.append('/')
    anslist.append(str(s))
    anslist.append('=')
    anslist.append(str(t))
elif s+t==f:
    anslist.append(str(f))
    anslist.append('=')
    anslist.append(str(s))
    anslist.append('+')
    anslist.append(str(t))
elif s-t==f:
    anslist.append(str(f))
    anslist.append('=')
    anslist.append(str(s))
    anslist.append('-')
    anslist.append(str(t))
elif s*t==f:
    anslist.append(str(f))
    anslist.append('=')
    anslist.append(str(s))
    anslist.append('*')
    anslist.append(str(t))
elif s/t==f:
    anslist.append(str(f))
    anslist.append('=')
    anslist.append(str(s))
    anslist.append('/')
    anslist.append(str(t))
new_s = "".join(anslist)
print(new_s)