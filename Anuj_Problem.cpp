#include <bits/stdc++.h>

using namespace std;

int main()
{
   int Testcases;
   cin>>Testcases;
   
   while(Testcases--){
       
       string s;
       cin>>s;
       
       map<char,int> m;
       
       for(int i=0; i<s.size(); i++){
           m[s[i]]++;
       }
       
       vector<string> answer;
       vector<int> ansint;
       
       vector<string> vec={"zero","one","two","three","four","five","six","seven","eight","nine"};
       
       
       
       for(int i=0; i<vec.size();){
        
               
               bool flag=true;
               
               for(int j=0; j<vec[i].size(); j++){
                   
                   if(m[vec[i][j]]<=0) flag=false;
                 
               }
               
               if(flag){
                   answer.push_back(vec[i]);
                   ansint.push_back(i);
                   for(int j=0; j<vec[i].size(); j++) m[vec[i][j]]--;
                     }else{
                   i++;
               }
           
       }
       
       for(int i=0; i<ansint.size(); i++) cout<<ansint[i];
       cout<<endl;
   }

    return 0;
}