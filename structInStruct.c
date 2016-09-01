typedef struct item_
{
  int id;
  char *name;
  struct item_ *next;
} item;

typedef struct item
{
  int id;
  char *name;
  struct item *next;
} Item;
static Item *item = foo;
