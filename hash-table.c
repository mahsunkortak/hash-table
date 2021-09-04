#include <stdio.h>
#include <stdlib.h>
int hash_table_size = 128;
int flag = 0;
  struct linked_list
  {
    char* data_name;
    struct linked_list* next;
   
  };
  struct linked_list* root[128];
  struct linked_list* hash[128];

  void hash_table(char* person_name){
   char first_letter = person_name[0];
  if (flag == 0)
  {
    for(int i; i<128; i++)
    {
    root[i] = NULL; 
    }
       flag = 1; // we do use flag cause don't get inside twice in loop.
  }
 
  first_letter = (int)(first_letter);
  int mod_first_letter = first_letter % hash_table_size;

  if(root[mod_first_letter] == NULL)
  {
 
  root[mod_first_letter] = (struct linked_list*)malloc(sizeof(struct linked_list));
  root[mod_first_letter]->data_name = person_name;
  root[mod_first_letter]->next = NULL;
  hash[mod_first_letter] = (struct linked_list*)malloc(sizeof(struct linked_list));
  hash[mod_first_letter]->data_name = person_name;
  hash[mod_first_letter]->next = NULL;
  }

  else if(root[mod_first_letter] != NULL)
  {
    struct linked_list* iter;
    iter = root[mod_first_letter];
    while(iter->next != NULL )
    {
      iter= iter->next;
    }
    iter->next = (struct linked_list*)malloc(sizeof(struct linked_list));
    iter->next->data_name = person_name;
    iter->next->next = NULL;

  }
  else
  {
     printf("\n*******\n error\n");
      
  }
}
void search_and_list(char key)
{
  struct linked_list* iter;
  int keyy = (int)(key);
  keyy = key % hash_table_size;
  iter = root[keyy];
  if(iter != NULL)
  {
  printf("index:%d dictionary: %s\n",keyy,iter->data_name);
  iter = iter->next;
  while( iter != NULL )
  {
    printf("index:%d dictionary: %s\n",keyy,iter->data_name);
    iter = iter->next ;
  }
  }
  else{

    printf("There isn't word with start by this key! ");
  }
 
}

int main(){

hash_table("ali");
hash_table("buse");
hash_table("ayse");
hash_table("banu");
hash_table("amed");
hash_table("berkcan");
hash_table("ahmt");
hash_table("sudenaz");


hash_table("alican");
hash_table("sudenaz");
hash_table("aaaaaaaa");


search_and_list('a');
search_and_list('b');
search_and_list('s');
return 0;
}