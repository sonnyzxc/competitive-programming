character(ross).
character(phoebe).
character(chandler).
character(rachel).
character(monica).
character(joey).
likes(ross, rachel).
likes(rachel, ross).
likes(monica, chanlder).
likes(chandler,monica).
likes(chandler,phoebe).
likes(phoebe,joey).
likes(monica, joey).
likes(joey, rachel).


dating(X, Y) :-
likes(X, Y),
likes(Y, X).

attraction(X, Y) :-
likes(X, Y);
likes(Y, X).
