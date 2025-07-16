ancestor(A, B) :-
parent(A, B).

ancestor(A, B) :-
parent(A, X),
ancestor(X, B).

parent(cat, monkey).
parent(dog, cat).
parent(monkey, dog).
