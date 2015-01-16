# einsteins-riddle

The program solves einstein's riddle using a brute force.
The worst case runtime is ~60 minutes.
The runtime distribution is even among all cases.
The runtime with the current configuration is ~20 minutes.

Einstein's riddle is a puzzle involving deductive logic.
It's said (by Einstein himself apparently) only 2% of the people in the world can solve it. However I think it's very not true, considering I did it by hand in about 20 minutes.
It took ~60 minutes to write the program, and it's verified to be correct by skipping ~30% of the permutations which are guaranteed to be wrong. (The correct permutation with the current configuration lies somewhere between 32% and 34%, which makes sense for the runtime to be ~20 minutes when the worst case runtime is ~30 minutes)

I guess after all it's still faster to do it by hand.
However since a program can do it I think most people in the world can do it, also in a much more efficient way.

# Problem description:

There are 5 houses in 5 different colors. In each house lives a person with a different nationality. The 5 owners drink a certain type of beverage, smoke a certain brand of cigar, and keep a certain pet. No owners have the same pet, smoke the same brand of cigar, or drink the same beverage.
The question is: Who owns the fish?

Hints:

The Brit lives in the red house.
The Swede keeps dogs as pets.
The Dane drinks tea.
The green house is on the left of the white house.
The green homeowner drinks coffee.
The person who smokes Pall Mall rears birds.
The owner of the yellow house smokes Dunhill.
The man living in the center house drinks milk.
The Norwegian lives in the first house.
The man who smokes Blend lives next to the one who keeps cats.
The man who keeps the horse lives next to the man who smokes Dunhill.
The owner who smokes Bluemaster drinks beer.
The German smokes prince.
The Norwegian lives next to the blue house.
The man who smokes Blend has a neighbor who drinks water.