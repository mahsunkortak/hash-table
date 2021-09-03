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
    printf("hhhhhhh");
  root[mod_first_letter]->data_name = person_name;
  root[mod_first_letter]->next = NULL;
  printf("cajjjj \n %s",root[61]->data_name);
  }

  else if(root[mod_first_letter] != NULL)
  {

    while(root[mod_first_letter]->next != NULL )
    {
      root[mod_first_letter] = root[mod_first_letter]->next;
    }
    root[mod_first_letter]->next = (struct linked_list*)malloc(sizeof(struct linked_list));
    root[mod_first_letter]->next->data_name = person_name;
    root[mod_first_letter]->next->next = NULL;

  }
  else
  {
     printf("\n*******\n error\n");
      
  }
}
void search_and_list(char key)
{
  int keyy = (int)(key);
  keyy = key % hash_table_size;
  while( root[keyy]->next != NULL )
  {
    printf("index:%d dictionary: %s",root[keyy]->data_name);
    root[keyy] = root[keyy]->next ;
  }
  printf("burdayım!!");
}

int main(){
  printf("dsssssssssssss");
  
  
hash_table("ali");
hash_table("veli");
hash_table("selami");
hash_table("ayse");
hash_table("samed");
hash_table("ahmt");
printf("cajjjj \n %d",root[114]->data_name);
//search_and_list('a');


return 0;
}