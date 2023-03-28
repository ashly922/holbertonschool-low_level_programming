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

void hash_table_delete(hash_table_t *ht) 
{
	if (ht == NULL) 
	{
		return;
	}
	for (int i = 0; i < ht->size; i++) 
	{
		hash_node_t *node = ht->nodes[i];

		while (node != NULL)
	{
            hash_node_t *next_node = node->next;
            free(node->key);
            free(node->value);
            free(node);
            node = next_node;
		}
	    free(ht->nodes);
   	 free(ht);
	}
}
