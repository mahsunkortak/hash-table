#include <stdio.h>

int hash_table_size = 100;

void hash_table(char* person_name){
  char first_letter = person_name[0];
  char* hash[hash_table_size];
  for(int i; i<10; i++){
    hash[i] = NULL;
  }
  first_letter = (int)(first_letter);
  int mod_first_letter = first_letter % hash_table_size;
  if(hash[mod_first_letter] == NULL){
  hash[mod_first_letter] = person_name;
  }
  else if(person_name == hash[mod_first_letter]){
      char* root_= hash[mod_first_letter];
  }
  else{

      
  }
}
void put_name(char* person_name){

}

int main(){
put_name("ali");
hash_table("veli");
hash_table("selami");
hash_table("ayse");

for(int i=0; i<hash_table_size;i++){
    
}


return 0;
}