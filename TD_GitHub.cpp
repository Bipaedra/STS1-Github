#include <iostream>
#include "algorithm"
#include "cmath"
#include "vector"
//Fonctions réalisées par l'étudiant 1 :
bool estMajeur(int age)
{
    if (age >= 18)
    {
        return true;
    } else {
        return false;
    }
}

int exposant(int nbre, int exp) {
    return pow(nbre, exp);
}

float TVA(int prix)
{
    return prix * 1.196;
}

int plusGrand(int a, int b, int c)
{
    std::vector<int> vec;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    std::sort(vec.begin(), vec.end(), std::greater());
    return vec.front();
}



//Fonctions réalisées par l'étudiant 2 :

bool estPair(int nb) {
	if(nb%2 == 0) {
		return true;
	} else {
		return false;
	}
}

int sommeNombre(int nb) {
	int somme = 0;
	for(int i = 0; i <= nb; i++) {
		somme += i;
	}
	return somme;
}

float salaireNet(int salaire) {
	float net = salaire - (salaire*0.23);
	return net;
}

int plusPetit(int a, int b, int c) {
	int min = a;
	if(min > b) {min = b;}
	if(min > c) {min = c;}
	return min;
}



//Fonctions réalisées par l'étudiant 3 :

bool estImpair(int nb) {
  return nb % 2 != 0;
}

float reduction(int prix, int reduc) {
  float reduction = (float) reduc / 100.0f;
  float prixReduit = (float) prix * (1.0f - reduction);
  return prixReduit;
}

int nombreMedian(int a, int b, int c) {
  if (a <= b && b <= c) {
    return b;
  } else if (c <= b && b <= a) {
    return b;
  } else if (b <= a && a <= c) {
    return a;
  } else if (c <= a && a <= b) {
    return a;
  } else {
    return c;
  }
}