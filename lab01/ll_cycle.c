#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node* t1 = head;
    node* h2 = head;
    if (h2->next != NULL){
	  h2 = h2->next;
	  if (h2->next != NULL){
	        h2 = h2->next;
	  }else{
	        return 0;
	  }
    }else{
          return 0;
    }
    t1 = t1->next;
    while (t1 != h2) {
     if (h2->next != NULL){
	  h2 = h2->next;
	  if (h2->next != NULL){
	        h2 = h2->next;
	  }else{
	        return 0;
	  }
    }else{
          return 0;
    }
    t1 = t1->next;
     if (t1 == h2){
         return 1;
     }
    }
}
