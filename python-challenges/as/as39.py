import random
music = [
    ['chopin','etude 10 4','etude 10 1','etude 25 12','etude 25 5','ballade no. 4','prelude 28 24','concerto no. 1','sonata no. 2','sonata no. 3','polonaise no. 5'],
    ['liszt','la campanella','liebstraume','sonata in b minor','mazeppa','hungarian rhapsody no. 2','concerto no. 2','feux follets','wilde jagd','appassionata','chasse-neige'],
    ['taylor swift','love story','shake it off','22','look what you made me do','me!','blank space','you belong with me','wildest dream','delicate','style'],
    ['drake','laugh now cry later','toosie slide','gods plan','find your love','in my feelings','one dance','hotline bling','chicago freestyle','money in the grave','nonstop'],
    ['justin bieber','yummy','baby','intentions','love yourself','i dont care','holy','10000 hours','what do you mean?','sorry','never say never'],
    ['shawn mendes','senorita','treat you better','stitches','theres nothing holding me back','mercy','in my blood','if i cant have you','lost in japan','youth','imagination'],
    ['chris brown','go crazy','no guidance','look at me now','with you','loyal','deuces','party','kiss kiss','say goodbye','ayo'],
    ['post malone','sunflower','circles','congratulations','better now','rockstar','white iverson','i fall apart','goodbyes','wow.','go flex'],
    ['dua lipa','new rules','dont start now','break my heart','un dia','physical','idgaf','levitating','be the one','kiss and make up','one kiss'],
    ['21 savage','x','a lot','no heart','bank account','ball w/o you','ghostface killers','yessirskiii','cant leave without it','red oops','savage mode'],
]
playlist = [['one direction','you & i'],['imagine dragons','radioactive']]
repeat = 0
for x in range(48):
    while True:
        rannum = random.randint(0,9)
        if music[rannum][0] != playlist[x][0] and music[rannum][0] != playlist[x+1][0]:
            break
    ransong = random.randint(1,10)
    playlist.append([music[rannum][0],music[rannum][ransong]])

for y in playlist:
    print(*y,sep=": ")