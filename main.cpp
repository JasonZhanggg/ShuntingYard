 #include <iostream>
#include <cstring>
#include "Node.h"
#include "List.h"

using namespace std;

int main(){
  List* list = new List("5");
  //char input[80];
  //cin.getline(input, sizeof(input));
  list->push("+");
  list->push("222");
  // cout<<list->s_pop()<<endl;
  // cout<<list->s_peek()<<endl;
  cout<<list->q_pop()<<endl;
  cout<<list->q_peek()<<endl;
  cout<<list->s_pop()<<endl;
  cout<<list->s_pop()<<endl;
  cout<<list->q_peek()<<endl;
  return 0;
}
