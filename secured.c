#include "./include/my.h"

int main(void)
{
    int size = 40;
    hashtable_t *ht = new_hashtable(&hash, size);
    ht_insert(ht, "Vision", "hey hey hey");
    ht_insert(ht, "d", "I got it index 0");
    ht_dump(ht);
    printf("\n");
    ht_delete(ht, "d");
    ht_insert(ht, "Pathfinding", "that car");
    ht_dump(ht);
    printf("Looking for \"%s\" : \"%s\"\n", "Vision", ht_search(ht, "Vrision"));
    delete_hashtable(ht);
    return 0;
}
