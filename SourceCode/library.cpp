#include<cstdio>
#include<iostream>
#include<cstring>
#include"library.h"
using namespace std;

void printLibrary(struct library * books);

int main(int argc, char ** argv){

/*
    declare books of type library 
    copy the specifications to figh and toRead 
*/
struct library figh;                                                                                                                                                                                                                                                                                                                                                              
struct library toRead;


strcpy(figh.title,"learning religion");
strcpy(figh.author,"Prophet");
strcpy(figh.subject,"Deen");
figh.book_id = 7172772;


strcpy(toRead.title,"MalcomX");
strcpy(toRead.author,"Alex Haley");
strcpy(toRead.subject,"Biography");     
                                                                                                                                                                                                                                                                                     
toRead.book_id = 181818;

printLibrary(&figh);
printLibrary(&toRead);


return 0;

}
// This function accept pointer to structure as parameter 
void printLibrary(struct library * books)
{
  cout <<"Book title :" << books->title << endl;
  cout <<"Book author :" << books->author << endl;
  cout <<"Book subject :" << books->subject<< endl;
  cout <<"Book id :" << books->book_id<< endl;
   
}
