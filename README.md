
# SECURED

## Project Overview
SECURED is a C library project (`libhashtable.a`) aimed at building a hash table to securely store key-value pairs, such as robot tournament blueprints. Developed under EPITECH’s "Elementary Programming in C" module, it introduces hash tables and custom hashing techniques for efficient data access and security, using a separate chaining approach for collision resolution.

## Usage and Features
The library is compiled into `libhashtable.a` and provides a header (`hashtable.h`) for managing hash tables. Key features include:
- Fast data access via hash-based indexing.
- Collision handling with linked lists (separate chaining).
- Functions to create, delete, insert, search, and dump hash table contents.
- Error handling with exit code 84 for failures (0 for success), messages to stderr.

To use, compile the library with `make`.

## Library Functions
The `hashtable.h` header defines:
- **Hash Function**: `int hash(char *key, int len)`  
  - Computes a hash value for a key, with `len` as the table size.
- **Create/Destroy**: 
  - `hashtable_t *new_hashtable(int (*hash)(char *, int), int len)`: Creates a hash table with a specified hash function and size.
  - `void delete_hashtable(hashtable_t *ht)`: Frees the hash table.
- **Manipulation**: 
  - `int ht_insert(hashtable_t *ht, char *key, char *value)`: Inserts a key-value pair (returns 0 on success, non-zero on error).
  - `int ht_delete(hashtable_t *ht, char *key)`: Deletes a key-value pair (returns 0 on success, non-zero on error).
  - `char *ht_search(hashtable_t *ht, char *key)`: Searches for a value by key (returns the value or NULL if not found).
  - `void ht_dump(hashtable_t *ht)`: Prints the table’s state.

  ## SCREENSHOT OF USAGE
  ![Secured.c](https://github.com/user-attachments/assets/60addc9f-f9d4-4aef-a3d2-1959441bda40)


