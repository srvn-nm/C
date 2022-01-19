#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
   const int SIZE = 10;

   void  showScores(const int scores[], const int SIZE);

    int scores [SIZE] = {20, 17, 9, 29, 19, 9, 19, 20, 20, 19};
   
   cout << endl;
   showScores(scores, SIZE);
   cout << endl;
   cin.get();

   return 0;
}  

void showScores (const int scores[], const int SIZE){

   int frame = 0;
   int game = 0;

   cout << setw(5) << "Frame";
   cout << setw(5) << " ";
   cout << setw(5) << "Score";
   cout << setw(5) << " ";
   cout << setw(4) << "Game\n";
   
   int i = 0;
   while (i <= SIZE){
      game += scores[i];

      cout << setw(3) << right << "1";
      cout << setw(11) << right << scores[0];
      cout << setw(10) << right << game << endl;
      i++;
   }
}