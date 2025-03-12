/*
** EPITECH PROJECT, 2024
** project
** File description:
** compute.c
*/

#include "../../include/my.h"

size_t compute(char *key)
{
    int hashmax = 3;
    size_t lseed = 0;
    size_t seed = 0;
    size_t fseed = firstseed(key);

    if (fseed < 130){
        fseed = small(fseed, fseed / 4);
    }
    seed = jackreaperjr(fseed, 6);
    for (int i = 0; i < hashmax; i++){
        seed = power(seed, 2);
        seed = jackreaperjr(seed, 6);
    }
    lseed = power(seed, 2);
    return lseed;
}
