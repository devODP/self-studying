#!/usr/bin/python
## complexity :  O(n log log n)

def isItPrime(N): # same as before
  for D in range(2, N):
    if (D * D > N):          # first added line
      break                  # second added line
    if N % D == 0:
      return False
  return True;

isPrime = [True] * 1000001;
isPrime[0] = False;
isPrime[1] = False;

for D in range(2, 1000001):
    if D*D > 10000001:
         break;
    if isItPrime(D):
         for multiples in range(D*D, 1000001, D):
            if isPrime[multiples] == True:
               isPrime[multiples] = False;

for num in range(0, 1000001):
        if isPrime[num] == True:
                print(num);
