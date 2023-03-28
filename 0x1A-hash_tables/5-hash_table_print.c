#include "hash_tables.h"

typedef struct {
    char *key;
    char *value;
    struct hash_node_t *next;
} hash_node_t;

typedef struct {
    hash_node_t **nodes;
    int size;
} hash_table_t;

void hash_table_print(const hash_table_t *ht) {
    if (ht == NULL) {
        return;
    }
    for (int i = 0; i < ht->size; i++) {
        hash_node_t *node = ht->nodes[i];
        if (node == NULL) {
            continue;
        }
        printf("[%d]: ", i);
        while (node) {
            printf("('%s': '%s')", node->key, node->value);
            if (node->next) {
                printf(" -> ");
            }
            node = node->next;
        }
        printf("\n");
    }
}
