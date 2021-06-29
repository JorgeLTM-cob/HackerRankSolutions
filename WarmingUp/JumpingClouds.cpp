#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector<int> c){
   int jump = 0;
   int i = 0;
   vector<int>::iterator it;

   for (it = c.begin(); it < (c.end() - 1); it++){
      if ((it + 2) < c.end()){
         if (*(it + 2) == 0) it++;
         jump++;
      } else {
         jump++;
      }
   }
   return(jump);
}

int main(){
   vector<int> c = {0, 0, 1, 0, 0, 1, 0};
   int result = jumpingOnClouds(c);
   cout << result << endl;

}
