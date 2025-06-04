/*
** EPITECH PROJECT, 2024
** project
** File description:
** jackreaper.c
*/

#include "../../include/my.h"

int jackreaper(size_t victim, int piece)
{
    int numorglft = (length(victim) - piece) / 2;
    size_t cutleft = victim / power(10, numorglft);
    int corpse = cutleft % power(10, piece);

    return corpse;
}

size_t jackreaperjr(size_t victim, int piece)
{
    int numorglft = (length(victim) - piece) / 2;
    size_t cutleft = victim / power(10, numorglft);
    size_t corpse = cutleft % power(10, piece);

    return corpse;
}
