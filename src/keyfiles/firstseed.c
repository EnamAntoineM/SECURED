/*
** EPITECH PROJECT, 2024
** project
** File description:
** firstseed.c
*/

#include "../../include/my.h"

size_t firstseed(char *key)
{
    size_t seed = 0;

    for (size_t i = 0; i < strlen(key); i++){
        if (i == 0) {
            seed = key[i];
        }
        if (i < strlen(key)-2){
            seed = (seed * 1000) + key[i];
        }
        if (i == strlen(key) - 1){
            seed = power(key[i], 2) * seed;
        }
    }
    seed = seed + 1403;
    return seed;
}
