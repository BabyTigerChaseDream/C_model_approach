#include<stdlib.h>

// in descending order , let strcmp return value multiply : -1
int compare_parts(const void *p, const void *q) {
     return -strcmp((struct part *)p->name, (struct part *)q->name);
}
