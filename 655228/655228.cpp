#include <iostream>
using namespace std;
int main() {
  int a,b;
  string n;
  cout<<"�п�J�r��";
  cin >> n;
  cout<<"�n�[�K(0)�٬O�ѱK(1)";
  cin>>b;
  cout<<"�п�J���j";
  cin>>a;
  if(b==0){
    for(int i=0;i<n.length();i++){
      if(n[i]>=65 && n[i]<=122){
        if((n[i]+a)/122>=1){
         n[i]='a'+n[i]-123+a;
       }
       else{
       n[i]+=a;
       }
      }
      else{
      n[i]=n[i];
      }
    cout<<(char)n[i];
    } 
  }
  else{
    for(int i=0;i<n.length();i++){
      if(n[i]>=65 && n[i]<=122){
        if((n[i]-a)/65<=1){
        n[i]='z'-n[i]-66+a;
        }
        else{
        n[i]-=a;
        }
      }
      else{
      n[i]=n[i];
      }
    cout<<(char)n[i];
    }
  }
}