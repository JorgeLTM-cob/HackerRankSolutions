#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n) {
   long long int times = 0;
   string::iterator it;
   int len = 0;
   int isa = 0;
   for (it = s.begin(); it < s.end(); it++){
       if (*it == 'a') isa++;
       len++;
   }
   times = (n / len) * isa;
   long long int theend = n % len;
   it = s.begin();
   while (theend > 0){
       if (*it == 'a') times++;
       it++;
       theend--;
   }
   return (times);
}

int main(){
   string s;
   s = "epsxyyflvrrrxzvnoenvpegvuonodjoxfwdmcvwctmekpsnamchznsoxaklzjgrqruyzavshfbmuhdwwmpbkwcuomqhiyvuztwvq";
   long n = 549382313570;
   long result = repeatedString(s, n);
   cout << result << endl;
   return 0;
}

