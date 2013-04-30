#include "eval.c"

typedef enum op_t;
typedef struct node_t;
typedef node_t[] tree_t;

void apply_op(op_t, tree_t l, tree_t r, tree_t result);
void eval_tree(tree_t, int x ,y );
void create_tree(transprim_t);
void compose_tree(trans_t, tree_t);

