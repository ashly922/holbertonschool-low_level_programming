#include "hash_tables.h"
#include <string.h>

static int hash(const char *key, int size) {
    int sum = 0;
    for (int i = 0; key[i]; i++) {
        sum += key[i];
    }
    return sum % size;
}

char *hash_table_get(const hash_table_t *ht, const char *key) {
    int index = hash(key, ht->size);
    hash_node_t *node = ht->nodes[index];
    while (node) {
        if (strcmp(node->key, key) == 0) {
            return node->value;
        }
        node = node->next;
    }
    return NULL;  // Key not found
}
