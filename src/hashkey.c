/*
** EPITECH PROJECT, 2024
** project
** File description:
** hashkey.c
*/

#include "../include/my.h"

int hash(char *key, int len)
{
    size_t lseed = 0;
    int hash = 0;
    int count = 0;

    if (key[0] == '\0')
        exit(84);
    lseed = compute(key);
    hash = jackreaper(lseed, 9);
    count = length(hash);
    while (count < 9){
        hash = small(hash, 1);
        count = length(hash);
        if (count == 9){
            break;
        }
        hash = jackreaper(hash, 9);
    }
    return hash;
}
