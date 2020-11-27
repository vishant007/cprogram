#include<iostream>
using namespace std;
void reverse(string s){
    if(s.length()==0){
        return; //return to above string if length of current string is 0
    }
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0] 
    //ros is reverse of string 
    //substr return the first value of every string
    //s[0] prints the very fisrt value of string

}
int main(){
    reverse("vishant");
    return 0;
}