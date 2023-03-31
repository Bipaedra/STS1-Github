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
    return prix * 0.196;
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










//Fonctions réalisées par l'étudiant 3 :
